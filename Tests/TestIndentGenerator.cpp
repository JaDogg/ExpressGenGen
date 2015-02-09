//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

TEST(IndentGenerator, TwoSpacesIndentGenerator)
{
    auto indent(std::make_shared<IndentGeneratorImpl>("  "));
    ASSERT_EQ(indent->GenerateIndent(0), "");
    ASSERT_EQ(indent->GenerateIndent(1), "  ");
    ASSERT_EQ(indent->GenerateIndent(2), "    ");
}

TEST(IndentGenerator, FourSpacesIndentGenerator)
{
    auto indent(std::make_shared<IndentGeneratorImpl>("    "));
    ASSERT_EQ(indent->GenerateIndent(0), "");
    ASSERT_EQ(indent->GenerateIndent(1), "    ");
    ASSERT_EQ(indent->GenerateIndent(2), "        ");
}
//--------------------------------------------
