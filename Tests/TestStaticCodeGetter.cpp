//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

TEST(StaticCodeGetter, BashCodeGetter)
{

    auto staticCodeGetter(std::make_shared<BashStaticCodeGetter>());
    auto staticCode = staticCodeGetter->GetStaticCode();
    // Template
    ASSERT_EQ(staticCode.BeforePreheader, "");
    ASSERT_EQ(staticCode.AfterPreheader, "");
    ASSERT_EQ(staticCode.AfterHeader, "");
    ASSERT_EQ(staticCode.BeforeFooter, "");
    ASSERT_EQ(staticCode.AfterFooter, "");
    ASSERT_EQ(staticCode.AfterPostFooter, "");
    // StaticCode used for inline mode
    ASSERT_EQ(staticCode.EchoCmdStart, "");
    ASSERT_EQ(staticCode.EchoCmdEnd, "");
}

//--------------------------------------------
