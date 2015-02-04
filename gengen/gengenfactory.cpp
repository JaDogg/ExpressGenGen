#include "gengenfactory.h"

GenGenParser* GenGenFactory::GetGenGenParser(GenGenLanguage language)
{
    switch (language) {
    case GENGENLANG_CPP:
        return new GenGenParser(new CppLineCodeGenerator(), new CppStaticCodeGetter(), new PostParser());
    case GENGENLANG_PYTHON:
        return new GenGenParser(new PythonLineCodeGenerator(), new PythonStaticCodeGetter(), new PostParser());
    case GENGENLANG_WEB:
        return new GenGenParser(new WebLineCodeGenerator(), new WebStaticCodeGetter(), new PostParser());
    default:
        return NULL;
    }
}
