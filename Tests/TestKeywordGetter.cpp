//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

TEST(KeywordGetter, GetKeywords)
{
    auto keywordGetter(std::make_shared<KeywordGetterImpl>(AT_SIGN_KEYWORDS));
    const Keywords keywords = keywordGetter->GetKeywords();
    ASSERT_EQ(keywords.preheader, "@@PREHEADER");
    ASSERT_EQ(keywords.header, "@@HEADER");
    ASSERT_EQ(keywords.footer, "@@FOOTER");
    ASSERT_EQ(keywords.postFooter, "@@POSTFOOTER");
    ASSERT_EQ(keywords.codeBlock, "@@CODE");
    ASSERT_EQ(keywords.endBlock, "@@END");
    ASSERT_EQ(keywords.lineDump, "@@@");
    ASSERT_EQ(keywords.indentNext, "@@>");
    ASSERT_EQ(keywords.indentEqual, "@=>");
    ASSERT_EQ(keywords.indentDepthOfTwo, "@>>");
    ASSERT_EQ(keywords.unindentNext, "<@@");
    ASSERT_EQ(keywords.unindentEqual, "<=@");
    ASSERT_EQ(keywords.unindentDepthOfTwo, "<<@");
    ASSERT_EQ(keywords.beginInline, "{@@");
    ASSERT_EQ(keywords.endInline, "@@}");

    auto keywordGetter2(std::make_shared<KeywordGetterImpl>(DOLLAR_KEYWORDS));
    auto keywords2 = keywordGetter2->GetKeywords();
    ASSERT_EQ(keywords2.preheader, "$$PREHEADER");
    ASSERT_EQ(keywords2.header, "$$HEADER");
    ASSERT_EQ(keywords2.footer, "$$FOOTER");
    ASSERT_EQ(keywords2.postFooter, "$$POSTFOOTER");
    ASSERT_EQ(keywords2.codeBlock, "$$CODE");
    ASSERT_EQ(keywords2.endBlock, "$$END");
    ASSERT_EQ(keywords2.lineDump, "$$$");
    ASSERT_EQ(keywords2.indentNext, "$$>");
    ASSERT_EQ(keywords2.indentEqual, "$=>");
    ASSERT_EQ(keywords2.indentDepthOfTwo, "$>>");
    ASSERT_EQ(keywords2.unindentNext, "<$$");
    ASSERT_EQ(keywords2.unindentEqual, "<=$");
    ASSERT_EQ(keywords2.unindentDepthOfTwo, "<<$");
    ASSERT_EQ(keywords2.beginInline, "{$$");
    ASSERT_EQ(keywords2.endInline, "$$}");

    auto keywordGetter3(std::make_shared<KeywordGetterImpl>(PERCENT_KEYWORDS));
    auto keywords3 = keywordGetter3->GetKeywords();
    ASSERT_EQ(keywords3.preheader, "%%PREHEADER");
    ASSERT_EQ(keywords3.header, "%%HEADER");
    ASSERT_EQ(keywords3.footer, "%%FOOTER");
    ASSERT_EQ(keywords3.postFooter, "%%POSTFOOTER");
    ASSERT_EQ(keywords3.codeBlock, "%%CODE");
    ASSERT_EQ(keywords3.endBlock, "%%END");
    ASSERT_EQ(keywords3.lineDump, "%%%");
    ASSERT_EQ(keywords3.indentNext, "%%>");
    ASSERT_EQ(keywords3.indentEqual, "%=>");
    ASSERT_EQ(keywords3.indentDepthOfTwo, "%>>");
    ASSERT_EQ(keywords3.unindentNext, "<%%");
    ASSERT_EQ(keywords3.unindentEqual, "<=%");
    ASSERT_EQ(keywords3.unindentDepthOfTwo, "<<%");
    ASSERT_EQ(keywords3.beginInline, "{%%");
    ASSERT_EQ(keywords3.endInline, "%%}");
}

//--------------------------------------------
