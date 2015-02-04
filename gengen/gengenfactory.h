#ifndef GENGENFACTORY_H
#define GENGENFACTORY_H
#include "gengenparser.h"

enum GenGenLanguage {
    GENGENLANG_CPP,
    GENGENLANG_PYTHON,
    GENGENLANG_WEB,
    GENGENLANG_LUA
};

class GenGenFactory {
public:
    GenGenParser* GetParser(GenGenLanguage language);
};

#endif // GENGENFACTORY_H
