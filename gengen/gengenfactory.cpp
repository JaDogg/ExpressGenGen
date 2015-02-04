#include "gengenfactory.h"

#include "postparser.h"
#include "languages/cpp/cpplinecodegenerator.h"
#include "languages/cpp/cppstaticcodegetter.h"
#include "languages/python/pythonlinecodegenerator.h"
#include "languages/python/pythonstaticcodegetter.h"
#include "languages/web/weblinecodegenerator.h"
#include "languages/web/webstaticcodegetter.h"
#include "languages/lua/lualinecodegenerator.h"
#include "languages/lua/luastaticcodegetter.h"
#include "languages/lua/luapostparser.h"
#include "languages/bash/bashlinecodegenerator.h"
#include "languages/bash/bashstaticcodegetter.h"

GenGenParser* GenGenFactory::GetParser(GenGenLanguage language)
{
    switch (language) {
    case GENGENLANG_CPP:
        return new GenGenParser(new CppLineCodeGenerator(), new CppStaticCodeGetter(), new PostParser());
    case GENGENLANG_PYTHON:
        return new GenGenParser(new PythonLineCodeGenerator(), new PythonStaticCodeGetter(), new PostParser());
    case GENGENLANG_WEB:
        return new GenGenParser(new WebLineCodeGenerator(), new WebStaticCodeGetter(), new PostParser());
    case GENGENLANG_LUA:
        return new GenGenParser(new LuaLineCodeGenerator(), new LuaStaticCodeGetter(), new LuaPostParser());
    case GENGENLANG_LUACODE:
        return new GenGenParser(new LuaLineCodeGenerator(), new LuaStaticCodeGetter(), new PostParser());
    case GENGENLANG_BASH:
        return new GenGenParser(new BashLineCodeGenerator(), new BashStaticCodeGetter(), new PostParser());
    default:
        return NULL;
    }
}
