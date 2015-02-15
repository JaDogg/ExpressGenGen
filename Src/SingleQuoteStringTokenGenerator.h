#ifndef _SINGLE_QUOTE_STRING_TOKEN_GENERATOR_H_
#define _SINGLE_QUOTE_STRING_TOKEN_GENERATOR_H_

//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
#include "StringTokenGenerator.h"
//--------------------------------------------
// Uses
#include <string>
#include <memory>
//--------------------------------------------

class SingleQuoteStringTokenGenerator : public StringTokenGenerator {
public:
    SingleQuoteStringTokenGenerator();
    virtual void Append(char c);
    virtual std::string GetToken();

private:
    std::unique_ptr<std::string> mToken;
};

//-------------------------------------------

#endif // _SINGLE_QUOTE_STRING_TOKEN_GENERATOR_H_
