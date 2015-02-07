//--------------------------------------------
// Definition
#include "StdInReader.h"
//--------------------------------------------
// Uses
#include <iostream>
//--------------------------------------------

bool StdInReader::ReadLine(std::string& line)
{
    return std::getline(std::cin, line);
}

//--------------------------------------------
