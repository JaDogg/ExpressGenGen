#ifndef _COMMA_SPACE_ARGS_FOR_ECHO_JOINER_H_
#define _COMMA_SPACE_ARGS_FOR_ECHO_JOINER_H_

//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
#include "ArgsForEchoJoiner.h"
//--------------------------------------------
// Uses
#include <vector>
#include <memory>
//--------------------------------------------
/*!
 * Comma space args for echo joiner is a class that joins tokens
 * to be seperated by a comma and a space
 */
class CommaSpaceArgsForEchoJoiner : public ArgsForEchoJoiner {
public:
    CommaSpaceArgsForEchoJoiner();
    virtual void AddToken(const std::string& token);
    virtual void AddStringToken(const std::string& strToken);
    virtual std::string GetCode();

private:
    std::unique_ptr<std::vector<std::string> > mArgsList;
};

//-------------------------------------------

#endif // _COMMA_SPACE_ARGS_FOR_ECHO_JOINER_H_
