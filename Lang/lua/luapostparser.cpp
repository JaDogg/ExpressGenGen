#include "luapostparser.h"
#include <lua.hpp>

void LuaPostParser::PostParse(std::string code)
{
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);
    int failed = luaL_dostring(L, code.c_str());
    if (failed) {
        std::cerr << "-- Error Occured.." << std::endl;
        std::cerr << "-- Generated Lua Code" << std::endl;
        std::cerr << code << std::endl;
        std::cerr << lua_tostring(L, -1) << std::endl;
    }
    lua_close(L);
}
