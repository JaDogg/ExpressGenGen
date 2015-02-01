#include "gengenfactory.h"

GenGenParser* GenGenFactory::GetGenGenParser(GenGenLanguage language)
{
    switch (language) {
    case GENGENLANG_CPP:
        return new GenGenParser(new CppLineCodeGenerator(), new CppStaticCodeGetter());
    case GENGENLANG_PYTHON:
        return new GenGenParser(new PythonLineCodeGenerator(), new PythonStaticCodeGetter());
    case GENGENLANG_WEB:
        return new GenGenParser(new WebLineCodeGenerator(), new WebStaticCodeGetter());
    default:
        return NULL;
    }
}
