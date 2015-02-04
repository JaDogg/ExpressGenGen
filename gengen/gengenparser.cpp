#include "gengenparser.h"

GenGenParser::GenGenParser(LineCodeGenerator* linecode, StaticCodeGetter* staticGetter, PostParser* postParser)
{
    mLinecode = linecode;
    mStaticGetter = staticGetter;
    mPostParser = postParser;
    indentCount = staticGetter->GetStartingIndent();
}

GenGenParser::~GenGenParser()
{
    delete mLinecode;
    delete mStaticGetter;
    delete mPostParser;
}

bool GenGenParser::IsStrIn(std::string& str, int pos, std::string& checkStr)
{
    int check_str_size = checkStr.length();
    int str_size = str.length();
    if (pos + check_str_size > str_size) {
        return false;
    }
    for (int i = 0; i < check_str_size; i++) {
        if (str[pos + i] != checkStr[i]) {
            return false;
        }
    }
    return true;
}

void GenGenParser::IncreaseIndent(int count)
{
    indentCount += count;
    if (indentCount < 0)
        indentCount = 0;
}

bool GenGenParser::SingleLineModeParse(std::string& line)
{
    for (auto codeInSingleLineLogic : LST_CODE_IN_SINGLELINE) {
        int incBefore;
        int incAfter;
        std::string relatedToken;
        std::tie(incBefore, incAfter, relatedToken) = codeInSingleLineLogic;

        if (this->IsStrIn(line, 0, relatedToken)) {
            this->IncreaseIndent(incBefore);
            mAppender.Append(mLinecode->CalculateIndent(indentCount)
                             + line.substr(relatedToken.length()),
                             BLOCK_CODE);
            this->IncreaseIndent(incAfter);
            return true;
        }
    }
    return false;
}

void GenGenParser::InLineModeParse(std::string& line, int size)
{
    std::string token("");
    InLineParseMode mode = INLINE_CODE;
    mLinecode->StartLine();
    for (int i = 0; i < size; ++i) {
        if (this->IsStrIn(line, i, TOKEN_INLINE_START)) {
            i += 2;
            if (!token.empty()) {
                mLinecode->WriteCodePrintingCode(token);
                token.clear();
            }
            mode = INLINE_TEMPLATE;
            continue;
        } else if (this->IsStrIn(line, i, TOKEN_INLINE_END)) {
            i += 2;
            if (!token.empty()) {
                mLinecode->WriteCode(token);
                token.clear();
            }
            mode = INLINE_CODE;
            continue;
        }

        char chr = line[i];
        if (mode == INLINE_CODE) {
            mLinecode->EscapedAppend(token, chr);
        } else {
            token.push_back(chr);
        }
    }

    mLinecode->WriteCodePrintingCode(token);
    mLinecode->EndLine();
    mAppender.Append(mLinecode->CalculateIndent(indentCount)
                     + mLinecode->GetGeneratedCode(),
                     BLOCK_CODE);
}

void GenGenParser::Parse()
{
    std::string line;
    BlockParseMode blockMode = BLOCKMODE_TEMPLATE;
    BlockType blockType = BLOCK_UNKNOWN;
    bool gotoTop;
    while (std::getline(std::cin, line)) {

        // SingleLineMode Parsing
        if (this->SingleLineModeParse(line)) {
            continue;
        }

        // -------------------------------------------
        // BlockMode Parsing
        std::string trimmedLine = boost::trim_right_copy(line);

        if (boost::equal(trimmedLine, TOKEN_ENDBLOCK)) {
            blockMode = BLOCKMODE_TEMPLATE;
            blockType = BLOCK_UNKNOWN;
            continue;
        }

        gotoTop = false;
        for (auto codeAsBlocksLogic : LST_CODE_AS_BLOCKS) {
            std::string relatedToken;
            BlockType curBlockType;
            std::tie(relatedToken, curBlockType) = codeAsBlocksLogic;
            if (boost::equal(trimmedLine, relatedToken)) {
                blockMode = BLOCKMODE_CODE;
                blockType = curBlockType;
                gotoTop = true;
                break;
            }
        }

        if (gotoTop) {
            continue;
        }

        if (blockMode == BLOCKMODE_CODE) {
            mAppender.Append(line, blockType);
            continue;
        }
        // -------------------------------------------

        // InLineMode Parsing
        this->InLineModeParse(line, line.length());
    }
}
void GenGenParser::PostParse()
{
    CodeJoiner joiner(mAppender, mStaticGetter);
    mPostParser->PostParse(joiner.GetCode());
}
