//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

// ---------- Double Quote -----------

TEST(StringTokenGenerator, DoubleQuoteStringTokenGeneratorBasicTest)
{
    auto tokenGen(std::make_shared<DoubleQuoteStringTokenGenerator>());
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    tokenGen->Append('h');
    tokenGen->Append('e');
    tokenGen->Append('l');
    tokenGen->Append('l');
    tokenGen->Append('o');
    // Should translate to {"hello"}
    ASSERT_EQ(tokenGen->GetToken(), "\"hello\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
}

TEST(StringTokenGenerator, DoubleQuoteStringTokenGeneratorEscapeDoubleQuote)
{
    auto tokenGen(std::make_shared<DoubleQuoteStringTokenGenerator>());
    tokenGen->Append('"');
    tokenGen->Append('o');
    tokenGen->Append('n');
    tokenGen->Append('e');
    tokenGen->Append('"');
    // Should translate to {"\"one\""}
    ASSERT_EQ(tokenGen->GetToken(), "\"\\\"one\\\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
}

TEST(StringTokenGenerator, DoubleQuoteStringTokenGeneratorEscapeAll)
{
    auto tokenGen(std::make_shared<DoubleQuoteStringTokenGenerator>());
    tokenGen->Append('"');
    tokenGen->Append('C');
    tokenGen->Append(':');
    tokenGen->Append('\\');
    tokenGen->Append('"');
    // Should translate to {"\"C:\\\""}
    ASSERT_EQ(tokenGen->GetToken(), "\"\\\"C:\\\\\\\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
}

TEST(StringTokenGenerator, DoubleQuoteEmptyFromBegining)
{
    auto tokenGen(std::make_shared<DoubleQuoteStringTokenGenerator>());
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
    ASSERT_EQ(tokenGen->GetToken(), "\"\"");
}

// -------- SingleQuote ----------

TEST(StringTokenGenerator, SingleQuoteStringTokenGeneratorBasicTest)
{
    auto tokenGen(std::make_shared<SingleQuoteStringTokenGenerator>());
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
    tokenGen->Append('h');
    tokenGen->Append('e');
    tokenGen->Append('l');
    tokenGen->Append('l');
    tokenGen->Append('o');
    // Should translate to {'hello'}
    ASSERT_EQ(tokenGen->GetToken(), "'hello'");
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
}

TEST(StringTokenGenerator, SingleQuoteStringTokenGeneratorEscapeSingleQuote)
{
    auto tokenGen(std::make_shared<SingleQuoteStringTokenGenerator>());
    tokenGen->Append('\'');
    tokenGen->Append('o');
    tokenGen->Append('n');
    tokenGen->Append('e');
    tokenGen->Append('\'');
    // Should translate to {'\'one\''}
    ASSERT_EQ(tokenGen->GetToken(), "'\\'one\\''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
}

TEST(StringTokenGenerator, SingleQuoteStringTokenGeneratorEscapeAll)
{
    auto tokenGen(std::make_shared<SingleQuoteStringTokenGenerator>());
    tokenGen->Append('\'');
    tokenGen->Append('C');
    tokenGen->Append(':');
    tokenGen->Append('\\');
    tokenGen->Append('\'');
    // Should translate to {'\'C:\\\''}
    ASSERT_EQ(tokenGen->GetToken(), "'\\'C:\\\\\\''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
}

TEST(StringTokenGenerator, SingleQuoteEmptyFromBegining)
{
    auto tokenGen(std::make_shared<SingleQuoteStringTokenGenerator>());
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
    ASSERT_EQ(tokenGen->GetToken(), "''");
}
//--------------------------------------------

