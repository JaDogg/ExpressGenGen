#ifndef _LINE_READER_H_
#define _LINE_READER_H_

//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
//
//--------------------------------------------
// Uses
#include <string>
//--------------------------------------------

// LineReader Interface is a wrapper around std::getline
class LineReader {
public:
    virtual bool ReadLine(std::string& line) = 0;
    virtual ~LineReader() {}

private:
};

//-------------------------------------------

#endif // _LINE_READER_H_
