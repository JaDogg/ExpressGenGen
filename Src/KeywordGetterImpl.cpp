//--------------------------------------------
// Definition
#include "KeywordGetterImpl.h"
//--------------------------------------------
// Uses
#include <assert.h>
//--------------------------------------------

KeywordGetterImpl::KeywordGetterImpl(const KeywordType& keywordType)
    : mKeywordType(keywordType)
{
}

const Keywords KeywordGetterImpl::GetKeywords() const
{

    switch (mKeywordType) {
    case DOLLAR_KEYWORDS:
        return { "$$PREHEADER",
                 "$$HEADER",
                 "$$FOOTER",
                 "$$POSTFOOTER",
                 "$$CODE",
                 "$$END",
                 "$$$",
                 "$$>",
                 "$=>",
                 "$>>",
                 "<$$",
                 "<=$",
                 "<<$",
                 "{$$",
                 "$$}" };
    case PERCENT_KEYWORDS:
        return { "%%PREHEADER",
                 "%%HEADER",
                 "%%FOOTER",
                 "%%POSTFOOTER",
                 "%%CODE",
                 "%%END",
                 "%%%",
                 "%%>",
                 "%=>",
                 "%>>",
                 "<%%",
                 "<=%",
                 "<<%",
                 "{%%",
                 "%%}" };
    case AT_SIGN_KEYWORDS:
        return { "@@PREHEADER",
                 "@@HEADER",
                 "@@FOOTER",
                 "@@POSTFOOTER",
                 "@@CODE",
                 "@@END",
                 "@@@",
                 "@@>",
                 "@=>",
                 "@>>",
                 "<@@",
                 "<=@",
                 "<<@",
                 "{@@",
                 "@@}" };
    }
    // should never reach here
    assert(false);
    return {};
}

//--------------------------------------------
