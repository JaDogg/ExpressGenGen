#ifndef _INDENT_GENERATOR_IMPL_H_
#define _INDENT_GENERATOR_IMPL_H_

//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
#include "IndentGenerator.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

class IndentGeneratorImpl : public IndentGenerator {
public:
    IndentGeneratorImpl(const std::string& singleIndent);
    const std::string GenerateIndent(const int& indentLevel);

private:
    const std::string mSingleIndent;
};

//-------------------------------------------

#endif // _INDENT_GENERATOR_IMPL_H_
