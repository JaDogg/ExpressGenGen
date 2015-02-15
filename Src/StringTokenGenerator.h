#ifndef _STRING_TOKEN_GENERATOR_H_
#define _STRING_TOKEN_GENERATOR_H_
//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
//
//--------------------------------------------
// Uses
#include <string>
//--------------------------------------------

class StringTokenGenerator {
public:
    virtual void Append(char c) = 0;
    virtual std::string GetToken() = 0 ;
    virtual ~StringTokenGenerator() {}

private:
};

//-------------------------------------------

#endif // _STRING_TOKEN_GENERATOR_H_

//TODO StringTokenGenerator -> SingleQuote, Bash
