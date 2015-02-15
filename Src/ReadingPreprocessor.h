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
    std::shared_ptr<std::vector<CodeLine> > GetLines();
    void Process(std::string startingFile);

private:
    std::shared_ptr<LineReader> mLineReader;
    std::string mStartingFile;
};

//-------------------------------------------

#endif // _READING_PREPROCESSOR_H_
