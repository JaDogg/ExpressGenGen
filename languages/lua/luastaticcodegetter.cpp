#include "luastaticcodegetter.h"

LuaStaticCodeGetter::LuaStaticCodeGetter() {}

std::string LuaStaticCodeGetter::GetBeforePreHeader()
{
    return std::string("-----------------------------------------------------\n"
                       "-- |                                                |\n"
                       "-- | Generated By ExpressGenGen                     |\n"
                       "-- |                              -Bhathiya Perera  |\n"
                       "-- |                                                |\n"
                       "-----------------------------------------------------\n");
}
std::string LuaStaticCodeGetter::GetAfterPreHeader()
{
    return std::string();
}
std::string LuaStaticCodeGetter::GetAfterHeader()
{
    return std::string("function printcode()\n");
}
std::string LuaStaticCodeGetter::GetBeforeFooter()
{
    return std::string("end\n");
}
std::string LuaStaticCodeGetter::GetAfterFooter()
{
    return std::string();
}
std::string LuaStaticCodeGetter::GetAfterPostFooter()
{
    return std::string("printcode()\n");
}
unsigned int LuaStaticCodeGetter::GetStartingIndent()
{
    return 1;
}
