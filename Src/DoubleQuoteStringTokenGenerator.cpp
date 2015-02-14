//--------------------------------------------
// Definition
#include "DoubleQuoteStringTokenGenerator.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

DoubleQuoteStringTokenGenerator::DoubleQuoteStringTokenGenerator()
    : mToken(new std::string())
{
}

void DoubleQuoteStringTokenGenerator::Append(char c)
{
    switch (c) {
    case '"':
        mToken->append("\\\"");
        break;
    case '\\':
        mToken->append("\\\\");
        break;
    default:
        mToken->push_back(c);
        break;
    }
}

std::string DoubleQuoteStringTokenGenerator::GetToken()
{
    std::string token("\"");
    token.append(*mToken);
    token.append("\"");
    mToken->clear();
    return token;
}

//--------------------------------------------
