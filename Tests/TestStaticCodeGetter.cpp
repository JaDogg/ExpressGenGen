//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

TEST(StaticCodeGetter, BashStaticCodeGetter)
{
    auto staticCodeGetter(std::make_shared<BashStaticCodeGetter>());
    auto staticCode = staticCodeGetter->GetStaticCode();
    // Static code used for template
    ASSERT_EQ(staticCode.BeforePreheader, "");
    ASSERT_EQ(staticCode.AfterPreheader, "");
    ASSERT_EQ(staticCode.AfterHeader, "");
    ASSERT_EQ(staticCode.BeforeFooter, "");
    ASSERT_EQ(staticCode.AfterFooter, "");
    ASSERT_EQ(staticCode.AfterPostFooter, "");
    // Static code used for inline mode
    ASSERT_EQ(staticCode.EchoCmdStart, "");
    ASSERT_EQ(staticCode.EchoCmdEnd, "");
}

//--------------------------------------------
