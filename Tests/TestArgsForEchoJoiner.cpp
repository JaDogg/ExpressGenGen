//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

TEST(ArgsForEchoJoiner, CommaSpaceArgsForEchoJoinerBasicUsage)
{
    // Comma space can be used for most of the languages without modification
    // Cpp will use '<<' seperation
    // Different token types should be specified because if any
    // special processing at that level is needed it can be handled too
    // ex : Python needs to add str(Token) to non string tokens
    auto argsJoiner(std::make_shared<CommaSpaceArgsForEchoJoiner>());
    argsJoiner.AddStringToken("'abc'");
    argsJoiner.AddToken("val");
    argsJoiner.AddStringToken("'xyz'");
    // this is directly usable in javascript version, and would be in many more languages
    ASSERT_EQ(argsJoiner.GetCode(), "'abc', val, 'xyz'");
}

TEST(ArgsForEchoJoiner, CommaSpaceArgsForEchoJoinerExecuteTwice)
{
    auto argsJoiner(std::make_shared<CommaSpaceArgsForEchoJoiner>());
    argsJoiner.AddStringToken("'abc'");
    argsJoiner.AddToken("val");
    argsJoiner.AddStringToken("'xyz'");
    ASSERT_EQ(argsJoiner.GetCode(), "'abc', val, 'xyz'");
    ASSERT_EQ(argsJoiner.GetCode(), "");
    argsJoiner.AddStringToken("'lmn'");
    argsJoiner.AddToken("baz");
    argsJoiner.AddToken("foo");
    ASSERT_EQ(argsJoiner.GetCode(), "'lmn', baz, foo");
    ASSERT_EQ(argsJoiner.GetCode(), "");
}
//--------------------------------------------
