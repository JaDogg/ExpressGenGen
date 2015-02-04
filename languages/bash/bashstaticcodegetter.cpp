#include "bashstaticcodegetter.h"

BashStaticCodeGetter::BashStaticCodeGetter() {}

std::string BashStaticCodeGetter::GetBeforePreHeader()
{
    return std::string("#!/bin/bash                                       \n"
                       "##################################################\n"
                       "#                                                #\n"
                       "# Generated By ExpressGenGen                     #\n"
                       "#                              -Bhathiya Perera  #\n"
                       "#                                                #\n"
                       "##################################################\n");
}
std::string BashStaticCodeGetter::GetAfterPreHeader()
{
    return std::string();
}
std::string BashStaticCodeGetter::GetAfterHeader()
{
    return std::string();
}
std::string BashStaticCodeGetter::GetBeforeFooter()
{
    return std::string();
}
std::string BashStaticCodeGetter::GetAfterFooter()
{
    return std::string();
}
std::string BashStaticCodeGetter::GetAfterPostFooter()
{
    return std::string();
}
unsigned int BashStaticCodeGetter::GetStartingIndent()
{
    return 0;
}
