//--------------------------------------------
// Definition
#include "ErrorCollectorImpl.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

ErrorCollectorImpl::ErrorCollectorImpl()
    : mErrors(new std::vector<std::string>())
{
}

void ErrorCollectorImpl::Collect(const std::string& error)
{
    mErrors->push_back("Error >" + error);
}

int ErrorCollectorImpl::GetCount()
{
    return mErrors->size();
}

bool ErrorCollectorImpl::IsEmpty()
{
    return mErrors->empty();
}

std::shared_ptr<std::vector<std::string> > ErrorCollectorImpl::GetAllErrors()
{
   return mErrors;
}

//--------------------------------------------
