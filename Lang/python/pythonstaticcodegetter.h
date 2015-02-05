#ifndef PYTHONSTATICCODEGETTER_H
#define PYTHONSTATICCODEGETTER_H
#include "TemplateProcessingEngine/staticcodegetter.h"
class PythonStaticCodeGetter : public StaticCodeGetter {
public:
    PythonStaticCodeGetter();
    virtual std::string GetBeforePreHeader();
    virtual std::string GetAfterPreHeader();
    virtual std::string GetAfterHeader();
    virtual std::string GetBeforeFooter();
    virtual std::string GetAfterFooter();
    virtual std::string GetAfterPostFooter();
    virtual unsigned int GetStartingIndent();
};

#endif // PYTHONSTATICCODEGETTER_H
