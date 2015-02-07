#ifndef _STREAM_READER_H_
#define _STREAM_READER_H_

//--------------------------------------------
// Has
#include <istream>
//--------------------------------------------
// Inherits
#include "LineReader.h"
//--------------------------------------------
// Uses
#include <memory>
#include <string>
//--------------------------------------------

// Read lines from a stream
class StreamReader : public LineReader {
public:
    StreamReader(const std::shared_ptr<std::istream>& stream);
    virtual bool ReadLine(std::string& line);

private:
    std::shared_ptr<std::istream> mStream;
};

//-------------------------------------------

#endif // _STREAM_READER_H_
