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
    virtual void Collect(const std::string& error) = 0;
    virtual int GetCount() = 0;
    virtual bool IsEmpty() = 0;
    virtual std::shared_ptr<std::vector<std::string> > GetAllErrors() = 0;
    virtual ~ErrorCollector() {}

private:
};

//-------------------------------------------

#endif // _ERROR_COLLECTOR_H_

