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
    ASSERT_EQ(keywords.Preheader, "@@PREHEADER");
    ASSERT_EQ(keywords.Header, "@@HEADER");
    ASSERT_EQ(keywords.Footer, "@@FOOTER");
    ASSERT_EQ(keywords.PostFooter, "@@POSTFOOTER");
    ASSERT_EQ(keywords.CodeBlock, "@@CODE");
    ASSERT_EQ(keywords.EndBlock, "@@END");
    ASSERT_EQ(keywords.LineDump, "@@@");
    ASSERT_EQ(keywords.IndentNext, "@@>");
    ASSERT_EQ(keywords.IndentEqual, "@=>");
    ASSERT_EQ(keywords.IndentDepthOfTwo, "@>>");
    ASSERT_EQ(keywords.UnindentNext, "<@@");
    ASSERT_EQ(keywords.UnindentEqual, "<=@");
    ASSERT_EQ(keywords.UnindentDepthOfTwo, "<<@");
    ASSERT_EQ(keywords.BeginInline, "{@@");
    ASSERT_EQ(keywords.EndInline, "@@}");

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
