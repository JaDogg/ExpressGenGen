#ifndef WEBSTATICCODEGETTER_H
#define WEBSTATICCODEGETTER_H
#include "gengen/staticcodegetter.h"
class WebStaticCodeGetter : public StaticCodeGetter {
public:
    WebStaticCodeGetter();
    std::string GetBeforePreHeader();
    std::string GetAfterPreHeader();
    std::string GetAfterHeader();
    std::string GetBeforeFooter();
    std::string GetAfterFooter();
    std::string GetAfterPostFooter();
    unsigned int GetStartingIndent();
};

#endif // WEBSTATICCODEGETTER_H
