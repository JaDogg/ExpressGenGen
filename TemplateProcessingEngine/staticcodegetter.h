#ifndef STATICCODEGETTER_H
#define STATICCODEGETTER_H
#include <string>

class StaticCodeGetter {
public:
    virtual std::string GetBeforePreHeader() = 0;
    virtual std::string GetAfterPreHeader() = 0;
    virtual std::string GetAfterHeader() = 0;
    virtual std::string GetBeforeFooter() = 0;
    virtual std::string GetAfterFooter() = 0;
    virtual std::string GetAfterPostFooter() = 0;
    virtual unsigned int GetStartingIndent() = 0;
    virtual ~StaticCodeGetter(){}
};

#endif
