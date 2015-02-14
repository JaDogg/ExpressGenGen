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

/*!
 * This is the error collector abstraction
 * it is mainly responsible for collecting varius errors occured
 * During processing, advantages of having and error collector is
 * that after a failed processing whole set of errors can be displayed
 * once so the developer who uses this application sees all errors
 * to be fixed once.
 */
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

