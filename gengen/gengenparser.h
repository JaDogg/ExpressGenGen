#ifndef GENGENPARSER_H
#define GENGENPARSER_H
#include <string>
#include <list>
#include <tuple>
#include <boost/algorithm/string.hpp>
#include "linecodegenerator.h"
#include "staticcodegetter.h"
#include "codeappender.h"
#include "codejoiner.h"
#include "postparser.h"

enum InLineParseMode {
    INLINE_CODE,
    INLINE_TEMPLATE
};

enum BlockParseMode {
    BLOCKMODE_CODE,
    BLOCKMODE_TEMPLATE
};

//Code contains as a single line (SingleLine)
static std::string TOKEN_LINEDUMP("$$$");

static std::string TOKEN_INDENTNEXT("$$>");
static std::string TOKEN_INDENTEQUAL("$=>");
static std::string TOKEN_INDENTDEPTHOFTWO("$>>");

static std::string TOKEN_UNINDENTNEXT("<$$");
static std::string TOKEN_UNINDENTEQUAL("<=$");
static std::string TOKEN_UNINDENTDEPTHOFTWO("<<$");

//Code contains inside a single line (InlineBlock)
static std::string TOKEN_INLINE_START("{$$");
static std::string TOKEN_INLINE_END("$$}");

//Code contains as blocks (MultiLineBlock)
static std::string TOKEN_PREHEADER("$$PREHEADER");
static std::string TOKEN_HEADER("$$HEADER");
static std::string TOKEN_FOOTER("$$FOOTER");
static std::string TOKEN_POSTFOOTER("$$POSTFOOTER");
static std::string TOKEN_CODE("$$CODE");

static std::string TOKEN_ENDBLOCK("$$END");

static const std::list<std::tuple<int, int, std::string> > LST_CODE_IN_SINGLELINE{
    std::tuple<int, int, std::string>{ 0, 0, TOKEN_LINEDUMP },

    std::tuple<int, int, std::string>{ 0, 1, TOKEN_INDENTNEXT },
    std::tuple<int, int, std::string>{ 1, 0, TOKEN_INDENTEQUAL },
    std::tuple<int, int, std::string>{ 1, 1, TOKEN_INDENTDEPTHOFTWO },

    std::tuple<int, int, std::string>{ 0, -1, TOKEN_UNINDENTNEXT },
    std::tuple<int, int, std::string>{ -1, 0, TOKEN_UNINDENTEQUAL },
    std::tuple<int, int, std::string>{ -1, -1, TOKEN_UNINDENTDEPTHOFTWO }
};

static const std::list<std::tuple<std::string, BlockType> > LST_CODE_AS_BLOCKS{
    std::tuple<std::string, BlockType>{ TOKEN_PREHEADER, BLOCK_PREHEADER },
    std::tuple<std::string, BlockType>{ TOKEN_HEADER, BLOCK_HEADER },
    std::tuple<std::string, BlockType>{ TOKEN_FOOTER, BLOCK_FOOTER },
    std::tuple<std::string, BlockType>{ TOKEN_POSTFOOTER, BLOCK_POSTFOOTER },
    std::tuple<std::string, BlockType>{ TOKEN_CODE, BLOCK_CODE }
};

class GenGenParser {
private:
    //---------------------------------------
    LineCodeGenerator* mLinecode;
    StaticCodeGetter* mStaticGetter;
    PostParser* mPostParser;
    int indentCount;
    CodeAppender mAppender;
    //---------------------------------------
    bool SingleLineModeParse(std::string& line);
    void InLineModeParse(std::string& line, int size);
    void IncreaseIndent(int count);
    static bool IsStrIn(std::string& str, int pos, std::string& checkStr);

public:
    GenGenParser(LineCodeGenerator* linecode, StaticCodeGetter* staticGetter, PostParser* postParser);
    ~GenGenParser();
    void Parse();
    void PostParse();
};

#endif // GENGENPARSER_H
