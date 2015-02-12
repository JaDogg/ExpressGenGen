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
    const std::string Preheader;
    const std::string Header;
    const std::string Footer;
    const std::string PostFooter;
    const std::string CodeBlock;
    const std::string EndBlock;
    //single line mode
    const std::string LineDump;
    const std::string IndentNext;
    const std::string IndentEqual;
    const std::string IndentDepthOfTwo;
    const std::string UnindentNext;
    const std::string UnindentEqual;
    const std::string UnindentDepthOfTwo;
    //inline mode
    const std::string BeginInline;
    const std::string EndInline;
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
