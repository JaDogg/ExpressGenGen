#ifndef _KEYWORD_GETTER_H_
#define _KEYWORD_GETTER_H_

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

struct Keywords;

class KeywordGetter {
public:
    virtual const Keywords GetKeywords() const = 0;
    virtual ~KeywordGetter() {}

private:
};

//-------------------------------------------

#endif // _KEYWORD_GETTER_H_
