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
//
//--------------------------------------------


// LineReader Interface is a wrapper around std::readline
class LineReader {
public:
    virtual bool ReadLine(std::string& line) = 0;
    virtual ~LineReader(){}
private:

};

//-------------------------------------------

#endif // _LINE_READER_H_
