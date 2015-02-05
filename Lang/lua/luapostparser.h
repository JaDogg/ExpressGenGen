#ifndef LUAPOSTPARSER_H
#define LUAPOSTPARSER_H
#include "TemplateProcessingEngine/postparser.h"
class LuaPostParser : public PostParser
{
    virtual void PostParse(std::string code);
};

#endif // LUAPOSTPARSER_H
