//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

//TODO Add more test cases
TEST(Preprocessor, Process)
{
    std::string str("Hello\nWorld");
    auto strStream(std::make_shared<std::stringstream>(str));
    auto reader(std::make_shared<StreamLineReader>(strStream));
    // preprocessor takes a LineReader
    auto preprocessor(std::make_shared<ReadingPreprocessor>(reader));
    preprocessor->Process("<stdin>");
}

TEST(Preprocessor, GetLines)
{
    std::string str("Hello\nWorld");
    auto strStream(std::make_shared<std::stringstream>(str));
    auto reader(std::make_shared<StreamLineReader>(strStream));
    auto preprocessor(std::make_shared<ReadingPreprocessor>(reader));
    preprocessor->Process("<stdin>");
    auto lines = preprocessor->GetLines();
    ASSERT_EQ(lines->front().Text, "Hello");
    ASSERT_EQ(lines->back().Text, "World");
}

TEST(Preprocessor, GetLinesAdvanced)
{
    std::string str("Hello\nWorld");
    auto strStream(std::make_shared<std::stringstream>(str));
    auto reader(std::make_shared<StreamLineReader>(strStream));
    auto preprocessor(std::make_shared<ReadingPreprocessor>(reader));
    preprocessor->Process("<stdin>");
    auto lines = preprocessor->GetLines();
    ASSERT_EQ(lines->front().File, "<stdin>");
    ASSERT_EQ(lines->front().LineNo, 1);
    ASSERT_EQ(lines->front().IsProcessingAllowed, true);
    ASSERT_EQ(lines->front().Text, "Hello");
    ASSERT_EQ(lines->back().File, "<stdin>");
    ASSERT_EQ(lines->back().LineNo, 2);
    ASSERT_EQ(lines->back().IsProcessingAllowed, true);
    ASSERT_EQ(lines->back().Text, "World");
}

TEST(Preprocessor, GetLinesEmptyStart)
{
    std::string str("");
    auto strStream(std::make_shared<std::stringstream>(str));
    auto reader(std::make_shared<StreamLineReader>(strStream));
    auto preprocessor(std::make_shared<ReadingPreprocessor>(reader));
    preprocessor->Process("<stdin>");
    auto lines = preprocessor->GetLines();
    ASSERT_EQ(lines->empty(), true);
    lines = preprocessor->GetLines();
    ASSERT_EQ(lines->empty(), true);
    lines = preprocessor->GetLines();
    ASSERT_EQ(lines->empty(), true);
    lines = preprocessor->GetLines();
    ASSERT_EQ(lines->empty(), true);
    lines = preprocessor->GetLines();
    ASSERT_EQ(lines->empty(), true);
}

TEST(Preprocessor, GetLinesAndThenGetAgainMustBeEmpty)
{
    std::string str("Hello\nWorld");
    auto strStream(std::make_shared<std::stringstream>(str));
    auto reader(std::make_shared<StreamLineReader>(strStream));
    auto preprocessor(std::make_shared<ReadingPreprocessor>(reader));
    preprocessor->Process("<stdin>");
    auto lines = preprocessor->GetLines();
    ASSERT_EQ(lines->front().Text, "Hello");
    ASSERT_EQ(lines->back().Text, "World");
    lines = preprocessor->GetLines();
    ASSERT_EQ(lines->empty(), true);
    lines = preprocessor->GetLines();
    ASSERT_EQ(lines->empty(), true);
    lines = preprocessor->GetLines();
    ASSERT_EQ(lines->empty(), true);
    lines = preprocessor->GetLines();
}
//--------------------------------------------
