#ifndef _INDENT_GENERATOR_H_
#define _INDENT_GENERATOR_H_

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
 * This is the indent generator abstraction, this is responsible for
 * generating an indentation for varius languages,
 * Ex: For Python indentation is four spaces, and it can also be
 * Reused, as necessory for other languages avoiding duplication.
 */
class IndentGenerator {
public:
    virtual const std::string GenerateIndent(const int& indentLevel) = 0;
    virtual ~IndentGenerator() {}

private:
};

//-------------------------------------------

#endif // _INDENT_GENERATOR_H_
