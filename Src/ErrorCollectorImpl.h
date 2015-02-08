#ifndef _ERROR_COLLECTOR_IMPL_H_
#define _ERROR_COLLECTOR_IMPL_H_

//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
#include "ErrorCollector.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

class ErrorCollectorImpl : public ErrorCollector {
public:
    ErrorCollectorImpl();
    void Collect(const std::string& error);
    int GetCount();
    bool IsEmpty();
    std::shared_ptr<std::vector<std::string> > GetAllErrors();

private:
    std::shared_ptr<std::vector<std::string> > mErrors;
};

//-------------------------------------------

#endif // _ERROR_COLLECTOR_IMPL_H_
