#ifndef _STD_IN_LINE_READER_H_
#define _STD_IN_LINE_READER_H_

//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
#include "LineReader.h"
//--------------------------------------------
// Uses
#include <string>
//--------------------------------------------

// Read lines from std::cin
class StdInLineReader : public LineReader {
public:
    virtual bool ReadLine(std::string& line);

private:
};

//-------------------------------------------

#endif // _STD_IN_LINE_READER_H_
