//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

TEST(LineReader, CreateStdInReader)
{
    std::shared_ptr<LineReader> reader(std::make_shared<StdInReader>());
}

TEST(LineReader, ReadLineFromStream)
{
    std::string str("Hello\nWorld");
    std::string line;
    std::shared_ptr<std::istream> strStream(std::make_shared<std::stringstream>(str));
    std::shared_ptr<LineReader> reader(std::make_shared<StreamReader>(strStream));
    reader->ReadLine(line);
    ASSERT_EQ(line, "Hello");
    reader->ReadLine(line);
    ASSERT_EQ(line, "World");
    ASSERT_FALSE(reader->ReadLine(line));
}

TEST(LineReader, EmptyFromStart)
{
    std::string str;
    std::string line;
    std::shared_ptr<std::istream> strStream(std::make_shared<std::stringstream>(str));
    std::shared_ptr<LineReader> reader(std::make_shared<StreamReader>(strStream));
    ASSERT_FALSE(reader->ReadLine(line));
}

//--------------------------------------------
