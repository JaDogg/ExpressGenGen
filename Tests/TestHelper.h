//--------------------------------------------
// TestHelper
//
// This header is basically an include all type helper for Test*.cpp files
// therefore greatly reducing duplication
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wall"
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#include <gmock/gmock.h>
#pragma GCC diagnostic pop

#include <iostream>
#include <istream>
#include <sstream>
#include <memory>
// AutoGenerated
#include "../Src/ErrorCollector.h"
#include "../Src/ErrorCollectorImpl.h"
#include "../Src/LineReader.h"
#include "../Src/Printer.h"
#include "../Src/StdErrErrorPrinter.h"
#include "../Src/StdInReader.h"
#include "../Src/StreamReader.h"
// End AutoGenerated
//--------------------------------------------
