#ifndef GENGENPARSER_H
#define GENGENPARSER_H
#include <string>
#include <boost/algorithm/string.hpp>
#include "linecodegenerator.h"
#include "staticcodegetter.h"
#include "codeappender.h"
#include "codejoiner.h"
#include "postparser.h"

enum SingleLineParseMode {
    LINEMODE_CODE,
    LINEMODE_TEMPLATE
};

enum BlockType {
    BLOCK_PREHEADER,
    BLOCK_HEADER,
    BLOCK_FOOTER,
    BLOCK_POSTFOOTER,
    BLOCK_CODE,
    BLOCK_UNKNOWN
};

enum BlockMode {
    BLOCKMODE_CODE,
    BLOCKMODE_TEMPLATE
};

static std::string TOKEN_LINEDUMP("$$$");
static std::string TOKEN_INDENTNEXT("$$>");
static std::string TOKEN_INDENTEQUAL("$=>");
static std::string TOKEN_INDENTDEPTHOFTWO("$>>");

static std::string TOKEN_UNINDENTNEXT("<$$");
static std::string TOKEN_UNINDENTEQUAL("<=$");
static std::string TOKEN_UNINDENTDEPTHOFTWO("<<$");

static std::string TOKEN_INLINE_START("{$$");
static std::string TOKEN_INLINE_END("$$}");

static std::string TOKEN_PREHEADER("$$PREHEADER");
static std::string TOKEN_HEADER("$$HEADER");
static std::string TOKEN_FOOTER("$$FOOTER");
static std::string TOKEN_POSTFOOTER("$$POSTFOOTER");
static std::string TOKEN_CODEBLOCK("$$CODE");
static std::string TOKEN_ENDBLOCK("$$END");

class GenGenParser {
private:
    LineCodeGenerator* mLinecode;
    StaticCodeGetter* mStaticGetter;
    PostParser* mPostParser;
    CodeAppender mAppender;
    unsigned int indentCount;
    bool IsStrIn(std::string& str, int pos, std::string& checkStr);
    void LineModeParse(std::string& line, int size);

public:
    GenGenParser(LineCodeGenerator* linecode, StaticCodeGetter* staticGetter, PostParser* postParser);
    void Parse();
    void PostParse();
};

#endif // GENGENPARSER_H
