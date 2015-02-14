#ifndef _DOUBLE_QUOTE_STRING_TOKEN_GENERATOR_H_
#define _DOUBLE_QUOTE_STRING_TOKEN_GENERATOR_H_

//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
#include "StringTokenGenerator.h"
//--------------------------------------------
// Uses
#include <memory>
//--------------------------------------------

class DoubleQuoteStringTokenGenerator : public StringTokenGenerator {
public:
    DoubleQuoteStringTokenGenerator();
    virtual void Append(char c);
    virtual std::string GetToken();

private:
    std::unique_ptr<std::string> mToken;
};

//-------------------------------------------

#endif // _DOUBLE_QUOTE_STRING_TOKEN_GENERATOR_H_
