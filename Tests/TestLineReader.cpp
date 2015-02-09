//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

TEST(LineReader, CreateStdInReader)
{
    auto reader(std::make_shared<StdInLineReader>());
}

TEST(LineReader, ReadLineFromStream)
{
    std::string str("Hello\nWorld");
    std::string line;
    auto strStream(std::make_shared<std::stringstream>(str));
    auto reader(std::make_shared<StreamLineReader>(strStream));
    reader->ReadLine(line);
    ASSERT_EQ(line, "Hello");
    reader->ReadLine(line);
    ASSERT_EQ(line, "World");
    ASSERT_FALSE(reader->ReadLine(line));
    ASSERT_EQ(line, "World");
}

TEST(LineReader, EmptyFromStart)
{
    std::string str;
    std::string line;
    auto strStream(std::make_shared<std::stringstream>(str));
    auto reader(std::make_shared<StreamLineReader>(strStream));
    ASSERT_FALSE(reader->ReadLine(line));
    ASSERT_TRUE(line.empty());
}

//--------------------------------------------
