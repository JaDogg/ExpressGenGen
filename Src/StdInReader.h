#ifndef _STD_IN_READER_H_
#define _STD_IN_READER_H_

//--------------------------------------------
// Has
#include <string>
//--------------------------------------------
// Inherits
#include "LineReader.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

// Read lines from std::cin
class StdInReader : public LineReader {
public:
    virtual bool ReadLine(std::string& line);
private:

};

//-------------------------------------------

#endif // _STD_IN_READER_H_
