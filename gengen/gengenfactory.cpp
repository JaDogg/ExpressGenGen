#include "gengenfactory.h"

GenGenParser* GenGenFactory::GetGenGenParser(GenGenLanguage language)
{
    switch (language) {
    case GENGENLANG_CPP:
        return new GenGenParser(new CppLineCodeGenerator(), new CppStaticCodeGetter());
    case GENGENLANG_PYTHON:
        return new GenGenParser(new PythonLineCodeGenerator(), new PythonStaticCodeGetter());
    default:
        return NULL;
    }
}
