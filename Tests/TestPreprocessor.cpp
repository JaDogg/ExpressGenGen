//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

TEST(Preprocessor, Process)
{
    std::string str("Hello\nWorld");
    auto strStream(std::make_shared<std::stringstream>(str));
    auto reader(std::make_shared<StreamLineReader>(strStream));
    // preprocessor takes a LineReader
    auto preprocessor(std::make_shared<ReadingPreprocessor>(reader));
    preprocessor->Process();
}

TEST(Preprocessor, GetLines)
{
    std::string str("Hello\nWorld");
    auto strStream(std::make_shared<std::stringstream>(str));
    auto reader(std::make_shared<StreamLineReader>(strStream));
    auto preprocessor(std::make_shared<ReadingPreprocessor>(reader));
    preprocessor->Process();
    auto lines = preprocessor->GetLines();
    ASSERT_EQ(lines->front(), "Hello");
    ASSERT_EQ(lines->back(), "World");
}
//--------------------------------------------
