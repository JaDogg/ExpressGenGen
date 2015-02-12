#ifndef _STRING_TOKEN_GENERATOR_
#define _STRING_TOKEN_GENERATOR_

//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
//
//--------------------------------------------
// Uses
//
//--------------------------------------------

class StringTokenGenerator {
public:
    StringTokenGenerator();
    virtual ~StringTokenGenerator() {}

private:
};

//-------------------------------------------

#endif // _STRING_TOKEN_GENERATOR_

//TODO StringTokenGenerator -> (escaping the string is part of the job) for dbl quote,single quote, bash
//TODO LineCodeGenerator refactor rename-> InlineTokenJoiner -> for bash (, ) for cpp (<<)
//TODO StaticCodeGetter -> for bash, (GetEchoCodeStart, GetEchoCodeEnd)
