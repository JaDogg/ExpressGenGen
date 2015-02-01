#include "gengenparser.h"

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

void GenGenParser::LineModeParse(std::string& line, int size)
{
    std::string token("");
    SingleLineParseMode mode = LINEMODE_CODE;
    mLinecode->StartLine();
    for (int i = 0; i < size; ++i) {
        if (this->IsStrIn(line, i, TOKEN_INLINE_START)) {
            i += 2;
            if (!token.empty()) {
                mLinecode->WriteCodePrintingCode(token);
                token.clear();
            }
            mode = LINEMODE_TEMPLATE;
            continue;
        } else if (this->IsStrIn(line, i, TOKEN_INLINE_END)) {
            i += 2;
            if (!token.empty()) {
                mLinecode->WriteCode(token);
                token.clear();
            }
            mode = LINEMODE_CODE;
            continue;
        }

        char chr = line[i];
        if (mode == LINEMODE_CODE) {
            mLinecode->EscapedAppend(token, chr);
        } else {
            token.push_back(chr);
        }
    }

    mLinecode->WriteCodePrintingCode(token);
    mLinecode->EndLine();
    mAppender.AppendToCodeBody(mLinecode->CalculateIndent(indentCount) + mLinecode->GetGeneratedCode());
}

GenGenParser::GenGenParser(LineCodeGenerator* linecode, StaticCodeGetter* staticGetter)
{
    mLinecode = linecode;
    mStaticGetter = staticGetter;
    indentCount = staticGetter->GetStartingIndent();
}
void GenGenParser::Parse()
{
    std::string line;
    BlockMode blockMode = BLOCKMODE_TEMPLATE;
    BlockType blockType = BLOCK_UNKNOWN;
    while (std::getline(std::cin, line)) {

        std::string trimmedLine = boost::trim_copy(line);
        if (boost::equal(trimmedLine, TOKEN_ENDBLOCK)) {
            blockMode = BLOCKMODE_TEMPLATE;
            blockType = BLOCK_UNKNOWN;
            continue;
        } else if (boost::equal(trimmedLine, TOKEN_PREHEADER)) {
            blockMode = BLOCKMODE_CODE;
            blockType = BLOCK_PREHEADER;
            continue;
        } else if (boost::equal(trimmedLine, TOKEN_HEADER)) {
            blockMode = BLOCKMODE_CODE;
            blockType = BLOCK_HEADER;
            continue;
        } else if (boost::equal(trimmedLine, TOKEN_FOOTER)) {
            blockMode = BLOCKMODE_CODE;
            blockType = BLOCK_FOOTER;
            continue;
        } else if (boost::equal(trimmedLine, TOKEN_POSTFOOTER)) {
            blockMode = BLOCKMODE_CODE;
            blockType = BLOCK_POSTFOOTER;
            continue;
        } else if (boost::equal(trimmedLine, TOKEN_CODEBLOCK)) {
            blockMode = BLOCKMODE_CODE;
            blockType = BLOCK_CODE;
            continue;
        }

        if (blockMode == BLOCKMODE_CODE) {
            switch (blockType) {
            case BLOCK_PREHEADER:
                mAppender.AppendToPreHeader(line);
                break;
            case BLOCK_HEADER:
                mAppender.AppendToHeader(line);
                break;
            case BLOCK_FOOTER:
                mAppender.AppendToFooter(line);
                break;
            case BLOCK_POSTFOOTER:
                mAppender.AppendToPostFooter(line);
                break;
            case BLOCK_CODE:
                mAppender.AppendToCodeBody(line);
                break;
            default:
                break;
            }
            continue;
        }

        if (this->IsStrIn(line, 0, TOKEN_LINEDUMP)) {
            mAppender.AppendToCodeBody(mLinecode->CalculateIndent(indentCount)
                                       + line.substr(TOKEN_LINEDUMP.length()));
            continue;
        } else if (this->IsStrIn(line, 0, TOKEN_INDENTNEXT)) {
            mAppender.AppendToCodeBody(mLinecode->CalculateIndent(indentCount++)
                                       + line.substr(TOKEN_INDENTNEXT.length()));
            continue;
        } else if (this->IsStrIn(line, 0, TOKEN_INDENTEQUAL)) {
            mAppender.AppendToCodeBody(mLinecode->CalculateIndent(++indentCount)
                                       + line.substr(TOKEN_INDENTEQUAL.length()));
            continue;
        } else if (this->IsStrIn(line, 0, TOKEN_INDENTDEPTHOFTWO)) {
            mAppender.AppendToCodeBody(mLinecode->CalculateIndent(++indentCount)
                                       + line.substr(TOKEN_INDENTDEPTHOFTWO.length()));
            indentCount++;
            continue;
        } else if (this->IsStrIn(line, 0, TOKEN_UNINDENTNEXT)) {
            mAppender.AppendToCodeBody(mLinecode->CalculateIndent(indentCount)
                                       + line.substr(TOKEN_UNINDENTNEXT.length()));
            if (indentCount > 0) {
                --indentCount;
            }
            continue;
        } else if (this->IsStrIn(line, 0, TOKEN_UNINDENTEQUAL)) {
            if (indentCount > 0) {
                --indentCount;
            }
            mAppender.AppendToCodeBody(mLinecode->CalculateIndent(indentCount)
                                       + line.substr(TOKEN_UNINDENTEQUAL.length()));

            continue;
        } else if (this->IsStrIn(line, 0, TOKEN_UNINDENTDEPTHOFTWO)) {
            if (indentCount > 0) {
                --indentCount;
            }
            mAppender.AppendToCodeBody(mLinecode->CalculateIndent(indentCount)
                                       + line.substr(TOKEN_UNINDENTDEPTHOFTWO.length()));
            if (indentCount > 0) {
                --indentCount;
            }
            continue;
        }
        this->LineModeParse(line, line.length());
    }
}
std::string GenGenParser::GetCode()
{
    CodeJoiner joiner(mAppender, mStaticGetter);
    return joiner.GetCode();
}
