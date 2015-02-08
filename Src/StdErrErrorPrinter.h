#ifndef _STD_ERR_ERROR_PRINTER_H_
#define _STD_ERR_ERROR_PRINTER_H_

//--------------------------------------------
// Has
#include "ErrorCollector.h"
//--------------------------------------------
// Inherits
#include "Printer.h"
//--------------------------------------------
// Uses
#include <memory>
//--------------------------------------------

class StdErrErrorPrinter : public Printer {
public:
    StdErrErrorPrinter(const std::shared_ptr<ErrorCollector>& errorCollector);
    void Print();
private:
    std::shared_ptr<ErrorCollector> mErrorCollector;
};

//-------------------------------------------

#endif // _STD_ERR_ERROR_PRINTER_H_
