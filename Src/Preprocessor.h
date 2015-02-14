#ifndef _PREPROCESSOR_H_
#define _PREPROCESSOR_H_
//TODO Preprocessor, Line Info in lines
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

class Preprocessor {
public:
    virtual void Process() = 0;
    virtual std::shared_ptr<std::vector<std::string> > GetLines() = 0;
    virtual ~Preprocessor() {}

private:
};

//-------------------------------------------

#endif // _PREPROCESSOR_H_
