#ifndef BASHSTATICCODEGETTER_H
#define BASHSTATICCODEGETTER_H
#include "gengen/staticcodegetter.h"
class BashStaticCodeGetter : public StaticCodeGetter {
public:
    BashStaticCodeGetter();
    virtual std::string GetBeforePreHeader();
    virtual std::string GetAfterPreHeader();
    virtual std::string GetAfterHeader();
    virtual std::string GetBeforeFooter();
    virtual std::string GetAfterFooter();
    virtual std::string GetAfterPostFooter();
    virtual unsigned int GetStartingIndent();
};

#endif // BASHSTATICCODEGETTER_H
