#ifndef CPPSTATICCODEGETTER_H
#define CPPSTATICCODEGETTER_H
#include "gengen/staticcodegetter.h"
class CppStaticCodeGetter : public StaticCodeGetter
{
public:
    CppStaticCodeGetter();
    std::string GetBeforePreHeader();
    std::string GetAfterPreHeader();
    std::string GetAfterHeader();
    std::string GetBeforeFooter();
    std::string GetAfterFooter();
    std::string GetAfterPostFooter();
    unsigned int GetStartingIndent();
};

#endif // CPPSTATICCODEGETTER_H
