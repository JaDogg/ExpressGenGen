//--------------------------------------------
// Definition
#include "ReadingPreprocessor.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

ReadingPreprocessor::ReadingPreprocessor(std::shared_ptr<LineReader> lineReader)
    : mLineReader(lineReader)
{
}

std::shared_ptr<std::vector<std::string> > ReadingPreprocessor::GetLines()
{
   auto lines(std::make_shared<std::vector<std::string>>());
   std::string line;
   while(mLineReader->ReadLine(line)){
        lines->push_back(line);
   }
   return lines;
}

void ReadingPreprocessor::Process()
{
}

//--------------------------------------------
