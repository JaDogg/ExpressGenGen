//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

TEST(ErrorPrinter, PrintMethod)
{
    auto errColl(std::make_shared<ErrorCollectorImpl>());
    errColl->Collect("(Part of Test) Some Error");
    auto prnt (std::make_shared<StdErrErrorPrinter>(errColl));
    prnt->Print();
}

//--------------------------------------------
