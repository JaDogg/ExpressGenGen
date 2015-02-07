//--------------------------------------------
// Definition
#include "ErrorCollector.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

ErrorCollector::ErrorCollector()
    : mErrors(new std::vector<std::string>())
{
}

void ErrorCollector::Collect(const std::string& error)
{
    mErrors->push_back("Error >" + error);
}

int ErrorCollector::GetCount()
{
    return mErrors->size();
}

bool ErrorCollector::IsEmpty()
{
    return mErrors->empty();
}

std::shared_ptr<std::vector<std::string> > ErrorCollector::GetAllErrors()
{
   return mErrors;
}


//--------------------------------------------
