//--------------------------------------------
// Definition
#include "StreamLineReader.h"
//--------------------------------------------
// Uses
#include <iostream>
//--------------------------------------------

StreamLineReader::StreamLineReader(const std::shared_ptr<std::istream>& stream)
    : mStream(stream)
{
}

bool StreamLineReader::ReadLine(std::string& line)
{
    return std::getline(*mStream, line);
}

//--------------------------------------------

