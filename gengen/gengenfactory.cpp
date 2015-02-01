#include "gengenfactory.h"

GenGenParser *GenGenFactory::GetGenGenParser(GenGenLanguages language)
{
    switch (language) {
    case GENGENLANG_CPP:
        return new GenGenParser(new CppLineCodeGenerator(), new CppStaticCodeGetter());
    default:
        return NULL;
    }
}
