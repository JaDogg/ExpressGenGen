#ifndef CPPSTATICCODEGETTER_H
#define CPPSTATICCODEGETTER_H
#include "gengen/staticcodegetter.h"
class CppStaticCodeGetter : public StaticCodeGetter {
public:
    CppStaticCodeGetter();
    virtual std::string GetBeforePreHeader();
    virtual std::string GetAfterPreHeader();
    virtual std::string GetAfterHeader();
    virtual std::string GetBeforeFooter();
    virtual std::string GetAfterFooter();
    virtual std::string GetAfterPostFooter();
    virtual unsigned int GetStartingIndent();
};

#endif // CPPSTATICCODEGETTER_H
