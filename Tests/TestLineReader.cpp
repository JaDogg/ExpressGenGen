//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wall"
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#include <gmock/gmock.h>
#pragma GCC diagnostic pop

#include <iostream>
#include <istream>
#include <sstream>
#include <memory>
#include "../Src/LineReader.h"
#include "../Src/StdInReader.h"
//--------------------------------------------

TEST(LineReader, CreateObject)
{
    std::shared_ptr<LineReader> reader(std::make_shared<StdInReader>());
}

//--------------------------------------------
