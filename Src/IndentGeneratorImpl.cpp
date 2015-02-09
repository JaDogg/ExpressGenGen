//--------------------------------------------
// Definition
#include "IndentGeneratorImpl.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

IndentGeneratorImpl::IndentGeneratorImpl(const std::string& singleIndent)
    : mSingleIndent(singleIndent)
{
}

const std::string IndentGeneratorImpl::GenerateIndent(const int& indentLevel)
{
    std::string indent("");
    for (auto i = 0; i < indentLevel; i++) {
        indent.append(mSingleIndent);
    }

    return indent;
}

//--------------------------------------------
