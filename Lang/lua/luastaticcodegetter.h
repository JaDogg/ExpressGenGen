#ifndef LUASTATICCODEGETTER_H
#define LUASTATICCODEGETTER_H
#include "TemplateProcessingEngine/staticcodegetter.h"
class LuaStaticCodeGetter : public StaticCodeGetter {
public:
    LuaStaticCodeGetter();
    virtual std::string GetBeforePreHeader();
    virtual std::string GetAfterPreHeader();
    virtual std::string GetAfterHeader();
    virtual std::string GetBeforeFooter();
    virtual std::string GetAfterFooter();
    virtual std::string GetAfterPostFooter();
    virtual unsigned int GetStartingIndent();
};

#endif // LUASTATICCODEGETTER_H
