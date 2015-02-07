//--------------------------------------------
// Definition
#include "StreamReader.h"
//--------------------------------------------
// Uses
#include <iostream>
//--------------------------------------------

StreamReader::StreamReader(const std::shared_ptr<std::istream>& stream)
    : mStream(stream)
{
}

bool StreamReader::ReadLine(std::string& line)
{
    return std::getline(*mStream, line);
}

//--------------------------------------------
