#include "gengenfactory.h"

#include "postparser.h"
#include "Lang/cpp/cpplinecodegenerator.h"
#include "Lang/cpp/cppstaticcodegetter.h"
#include "Lang/python/pythonlinecodegenerator.h"
#include "Lang/python/pythonstaticcodegetter.h"
#include "Lang/web/weblinecodegenerator.h"
#include "Lang/web/webstaticcodegetter.h"
#include "Lang/lua/lualinecodegenerator.h"
#include "Lang/lua/luastaticcodegetter.h"
#include "Lang/lua/luapostparser.h"
#include "Lang/bash/bashlinecodegenerator.h"
#include "Lang/bash/bashstaticcodegetter.h"

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
