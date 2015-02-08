//--------------------------------------------
// Definition
#include "StdErrErrorPrinter.h"
//--------------------------------------------
// Uses
#include <iostream>
//--------------------------------------------

StdErrErrorPrinter::StdErrErrorPrinter(const std::shared_ptr<ErrorCollector> &errorCollector)
    : mErrorCollector(errorCollector)
{
}

void StdErrErrorPrinter::Print()
{
    for (auto singleError : *mErrorCollector->GetAllErrors()) {
        std::cerr << singleError << std::endl;
    }
}

//--------------------------------------------
