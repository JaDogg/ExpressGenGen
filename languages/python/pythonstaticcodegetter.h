#ifndef PYTHONSTATICCODEGETTER_H
#define PYTHONSTATICCODEGETTER_H
#include "gengen/staticcodegetter.h"
class PythonStaticCodeGetter : public StaticCodeGetter {
public:
    PythonStaticCodeGetter();
    std::string GetBeforePreHeader();
    std::string GetAfterPreHeader();
    std::string GetAfterHeader();
    std::string GetBeforeFooter();
    std::string GetAfterFooter();
    std::string GetAfterPostFooter();
    unsigned int GetStartingIndent();
};

#endif // PYTHONSTATICCODEGETTER_H
