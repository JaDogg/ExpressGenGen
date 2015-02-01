#ifndef GENGENFACTORY_H
#define GENGENFACTORY_H
#include "gengenparser.h"
// CPP Support
#include "languages/cpp/cpplinecodegenerator.h"
#include "languages/cpp/cppstaticcodegetter.h"

enum GenGenLanguages {
    GENGENLANG_CPP,
    GENGENLANG_PYTHON3,
};

class GenGenFactory {
public:
    GenGenParser* GetGenGenParser(GenGenLanguages language);
};

#endif // GENGENFACTORY_H
