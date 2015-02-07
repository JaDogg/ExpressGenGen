//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

TEST(ErrorPrinter, PrintMethod)
{
    ErrorCollector errColl;
    errColl.Collect("(Part of Test) Some Error");
    ErrorPrinter prnt(errColl);
    prnt.Print();
}

//--------------------------------------------
