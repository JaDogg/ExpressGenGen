#ifndef LUAPOSTPARSER_H
#define LUAPOSTPARSER_H
#include "gengen/postparser.h"
class LuaPostParser : public PostParser
{
    virtual void PostParse(std::string code);
};

#endif // LUAPOSTPARSER_H
