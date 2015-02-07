#ifndef _ERROR_COLLECTOR_H_
#define _ERROR_COLLECTOR_H_

//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
//
//--------------------------------------------
// Uses
#include <string>
#include <vector>
#include <memory>
//--------------------------------------------

class ErrorCollector {
public:
    ErrorCollector();
    void Collect(const std::string& error);
    int GetCount();
    bool IsEmpty();
    std::shared_ptr<std::vector<std::string> > GetAllErrors();

private:
    std::shared_ptr<std::vector<std::string> > mErrors;
};

//-------------------------------------------

#endif // _ERROR_COLLECTOR_H_

// TODO extract interface of ErrorCollector
