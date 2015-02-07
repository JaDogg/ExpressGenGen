#ifndef _ERROR_PRINTER_H_
#define _ERROR_PRINTER_H_

//--------------------------------------------
// Has
#include "ErrorCollector.h"
//--------------------------------------------
// Inherits
//
//--------------------------------------------
// Uses
//
//--------------------------------------------

class ErrorPrinter {
public:
    ErrorPrinter(const ErrorCollector& errorCollector);
    void Print();
private:
ErrorCollector mErrorCollector;
};

//-------------------------------------------

#endif // _ERROR_PRINTER_H_

//TODO Extract Interface of ErrorPrinter
