#ifndef _KEYWORD_GETTER_IMPL_H_
#define _KEYWORD_GETTER_IMPL_H_

//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
#include "KeywordGetter.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

struct Keywords {
    //block mode
    const std::string preheader;
    const std::string header;
    const std::string footer;
    const std::string postFooter;
    const std::string codeBlock;
    const std::string endBlock;
    // single line mode
    const std::string lineDump;
    const std::string indentNext;
    const std::string indentEqual;
    const std::string indentDepthOfTwo;
    const std::string unindentNext;
    const std::string unindentEqual;
    const std::string unindentDepthOfTwo;
    //inline mode
    const std::string beginInline;
    const std::string endInline;
};

enum KeywordType {
    DOLLAR_KEYWORDS,
    PERCENT_KEYWORDS,
    AT_SIGN_KEYWORDS
};

class KeywordGetterImpl : public KeywordGetter {
public:
    KeywordGetterImpl(const KeywordType& keywordType);
    const Keywords GetKeywords() const;

private:
    KeywordType mKeywordType;
};

//-------------------------------------------

#endif // _KEYWORD_GETTER_IMPL_H_
