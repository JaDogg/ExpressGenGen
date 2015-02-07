//--------------------------------------------
// Definition
#include "ErrorPrinter.h"
//--------------------------------------------
// Uses
#include <iostream>
//--------------------------------------------

ErrorPrinter::ErrorPrinter(const ErrorCollector& errorCollector)
    : mErrorCollector(errorCollector)
{
}

void ErrorPrinter::Print()
{
    for (auto singleError : *mErrorCollector.GetAllErrors()) {
        std::cerr << singleError << std::endl;
    }
}

//--------------------------------------------
