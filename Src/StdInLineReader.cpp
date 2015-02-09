//--------------------------------------------
// Definition
#include "StdInLineReader.h"
//--------------------------------------------
// Uses
#include <iostream>
//--------------------------------------------

bool StdInLineReader::ReadLine(std::string& line)
{
    return std::getline(std::cin, line);
}

//--------------------------------------------

