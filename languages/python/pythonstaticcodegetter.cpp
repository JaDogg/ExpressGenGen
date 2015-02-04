#include "pythonstaticcodegetter.h"

PythonStaticCodeGetter::PythonStaticCodeGetter() {}

std::string PythonStaticCodeGetter::GetBeforePreHeader()
{
    return std::string("#!/usr/bin/env python                             \n"
                       "from __future__ import print_function             \n"
                       "##################################################\n"
                       "#                                                #\n"
                       "# Generated By ExpressGenGen                     #\n"
                       "#                              -Bhathiya Perera  #\n"
                       "#                                                #\n"
                       "##################################################\n");
}
std::string PythonStaticCodeGetter::GetAfterPreHeader()
{
    return std::string();
}
std::string PythonStaticCodeGetter::GetAfterHeader()
{
    return std::string("def main():\n");
}
std::string PythonStaticCodeGetter::GetBeforeFooter()
{
    return std::string();
}
std::string PythonStaticCodeGetter::GetAfterFooter()
{
    return std::string();
}
std::string PythonStaticCodeGetter::GetAfterPostFooter()
{
    return std::string("if __name__ == '__main__':\n"
                       "    main()\n");
}
unsigned int PythonStaticCodeGetter::GetStartingIndent()
{
    return 1;
}
