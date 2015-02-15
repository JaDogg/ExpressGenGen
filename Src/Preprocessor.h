#ifndef _PREPROCESSOR_H_
#define _PREPROCESSOR_H_
//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
//
//--------------------------------------------
// Uses
#include <memory>
#include <vector>
#include <string>
//--------------------------------------------
struct CodeLine {
    const std::string File;
    const int LineNo;
    const bool IsProcessingAllowed;
    const std::string Text;
};

class Preprocessor {
public:
    virtual void Process(std::string startingFile) = 0;
    virtual std::shared_ptr<std::vector<CodeLine> > GetLines() = 0;
    virtual ~Preprocessor() {}

private:
};

//-------------------------------------------

#endif // _PREPROCESSOR_H_
