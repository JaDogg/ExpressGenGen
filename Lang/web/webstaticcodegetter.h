#ifndef WEBSTATICCODEGETTER_H
#define WEBSTATICCODEGETTER_H
#include "TemplateProcessingEngine/staticcodegetter.h"
class WebStaticCodeGetter : public StaticCodeGetter {
public:
    WebStaticCodeGetter();
    virtual std::string GetBeforePreHeader();
    virtual std::string GetAfterPreHeader();
    virtual std::string GetAfterHeader();
    virtual std::string GetBeforeFooter();
    virtual std::string GetAfterFooter();
    virtual std::string GetAfterPostFooter();
    virtual unsigned int GetStartingIndent();
};

#endif // WEBSTATICCODEGETTER_H
