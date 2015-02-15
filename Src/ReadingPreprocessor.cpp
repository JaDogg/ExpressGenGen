//--------------------------------------------
// Definition
#include "ReadingPreprocessor.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

ReadingPreprocessor::ReadingPreprocessor(std::shared_ptr<LineReader> lineReader)
    : mLineReader(lineReader)
    , mStartingFile("<unknown>")
{
}

std::shared_ptr<std::vector<CodeLine> > ReadingPreprocessor::GetLines()
{
    auto lines(std::make_shared<std::vector<CodeLine> >());
    int lineNo = 0;
    std::string line;
    while (mLineReader->ReadLine(line)) {
        lineNo++;
        lines->push_back({mStartingFile, lineNo, true, line});
    }
    return lines;
}

void ReadingPreprocessor::Process(std::string startingFile)
{
    mStartingFile = startingFile;
}

//--------------------------------------------
