#ifndef _ARGS_FOR_ECHO_JOINER_H_
#define _ARGS_FOR_ECHO_JOINER_H_
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

/*!
 * Args for echo joiner is a class abstraction that
 * is used to get for example comma seperated values for
 * languages like Python and JavaScript and '<<' seperated values
 * for C++. Since the comma-space seperation is useful for most
 * Languages having this abstraction avoids duplication.
 */
class ArgsForEchoJoiner {
public:
    virtual void AddToken(const std::string& token) = 0;
    virtual void AddStringToken(const std::string& strToken) = 0;
    virtual std::string GetCode() = 0;
    virtual ~ArgsForEchoJoiner() {}

private:
};

//-------------------------------------------

#endif // _ARGS_FOR_ECHO_JOINER_H_
