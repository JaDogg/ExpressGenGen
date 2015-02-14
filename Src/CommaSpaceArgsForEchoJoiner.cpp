//--------------------------------------------
// Definition
#include "CommaSpaceArgsForEchoJoiner.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

CommaSpaceArgsForEchoJoiner::CommaSpaceArgsForEchoJoiner()
    : mArgsList(new std::vector<std::string>())
{
}

void CommaSpaceArgsForEchoJoiner::AddToken(const std::string& token)
{
    mArgsList->push_back(token);
}

void CommaSpaceArgsForEchoJoiner::AddStringToken(const std::string& strToken)
{
    mArgsList->push_back(strToken);
}

std::string CommaSpaceArgsForEchoJoiner::GetCode()
{
    std::string code("");
    bool isFirst = true;
    for (auto token : *mArgsList) {
        if (!isFirst) {
            code.append(", ");
        } else {
            isFirst = false;
        }
        code.append(token);
    }
    mArgsList->clear();
    return code;
}

//--------------------------------------------
