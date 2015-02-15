//--------------------------------------------
// Definition
#include "SingleQuoteStringTokenGenerator.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

SingleQuoteStringTokenGenerator::SingleQuoteStringTokenGenerator()
    : mToken(new std::string())
{

}

void SingleQuoteStringTokenGenerator::Append(char c)
{

    switch (c) {
    case '\'':
        mToken->append("\\'");
        break;
    case '\\':
        mToken->append("\\\\");
        break;
    default:
        mToken->push_back(c);
        break;
    }
}

std::string SingleQuoteStringTokenGenerator::GetToken()
{

    std::string token("'");
    token.append(*mToken);
    token.append("'");
    mToken->clear();
    return token;
}

//--------------------------------------------
