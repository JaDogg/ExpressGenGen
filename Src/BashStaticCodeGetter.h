#ifndef _BASH_STATIC_CODE_GETTER_H_
#define _BASH_STATIC_CODE_GETTER_H_

//--------------------------------------------
// Has
//
//--------------------------------------------
// Inherits
#include "StaticCodeGetter.h"
//--------------------------------------------
// Uses
//
//--------------------------------------------

class BashStaticCodeGetter : public StaticCodeGetter {
public:
    const StaticCode GetStaticCode() const;
private:
};

//-------------------------------------------

#endif // _BASH_STATIC_CODE_GETTER_H_
