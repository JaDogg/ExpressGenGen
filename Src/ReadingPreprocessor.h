#ifndef _READING_PREPROCESSOR_H_
#define _READING_PREPROCESSOR_H_

//--------------------------------------------
// Has
#include "LineReader.h"
//--------------------------------------------
// Inherits
#include "Preprocessor.h"
//--------------------------------------------
// Uses
#include <memory>
//--------------------------------------------

class ReadingPreprocessor : public Preprocessor {
public:
    ReadingPreprocessor(std::shared_ptr<LineReader> lineReader);
    std::shared_ptr<std::vector<std::string> > GetLines();
    void Process();


private:
    std::shared_ptr<LineReader> mLineReader;
};

//-------------------------------------------

#endif // _READING_PREPROCESSOR_H_
