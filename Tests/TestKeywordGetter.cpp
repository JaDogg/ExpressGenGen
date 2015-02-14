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
    ASSERT_EQ(keywords2.Preheader, "$$PREHEADER");
    ASSERT_EQ(keywords2.Header, "$$HEADER");
    ASSERT_EQ(keywords2.Footer, "$$FOOTER");
    ASSERT_EQ(keywords2.PostFooter, "$$POSTFOOTER");
    ASSERT_EQ(keywords2.CodeBlock, "$$CODE");
    ASSERT_EQ(keywords2.EndBlock, "$$END");
    ASSERT_EQ(keywords2.LineDump, "$$$");
    ASSERT_EQ(keywords2.IndentNext, "$$>");
    ASSERT_EQ(keywords2.IndentEqual, "$=>");
    ASSERT_EQ(keywords2.IndentDepthOfTwo, "$>>");
    ASSERT_EQ(keywords2.UnindentNext, "<$$");
    ASSERT_EQ(keywords2.UnindentEqual, "<=$");
    ASSERT_EQ(keywords2.UnindentDepthOfTwo, "<<$");
    ASSERT_EQ(keywords2.BeginInline, "{$$");
    ASSERT_EQ(keywords2.EndInline, "$$}");

    auto keywordGetter3(std::make_shared<KeywordGetterImpl>(PERCENT_KEYWORDS));
    auto keywords3 = keywordGetter3->GetKeywords();
    ASSERT_EQ(keywords3.Preheader, "%%PREHEADER");
    ASSERT_EQ(keywords3.Header, "%%HEADER");
    ASSERT_EQ(keywords3.Footer, "%%FOOTER");
    ASSERT_EQ(keywords3.PostFooter, "%%POSTFOOTER");
    ASSERT_EQ(keywords3.CodeBlock, "%%CODE");
    ASSERT_EQ(keywords3.EndBlock, "%%END");
    ASSERT_EQ(keywords3.LineDump, "%%%");
    ASSERT_EQ(keywords3.IndentNext, "%%>");
    ASSERT_EQ(keywords3.IndentEqual, "%=>");
    ASSERT_EQ(keywords3.IndentDepthOfTwo, "%>>");
    ASSERT_EQ(keywords3.UnindentNext, "<%%");
    ASSERT_EQ(keywords3.UnindentEqual, "<=%");
    ASSERT_EQ(keywords3.UnindentDepthOfTwo, "<<%");
    ASSERT_EQ(keywords3.BeginInline, "{%%");
    ASSERT_EQ(keywords3.EndInline, "%%}");
}

//--------------------------------------------
