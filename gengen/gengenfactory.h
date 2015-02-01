#ifndef GENGENFACTORY_H
#define GENGENFACTORY_H
#include "gengenparser.h"
// CPP Support
#include "languages/cpp/cpplinecodegenerator.h"
#include "languages/cpp/cppstaticcodegetter.h"
#include "languages/python/pythonlinecodegenerator.h"
#include "languages/python/pythonstaticcodegetter.h"

enum GenGenLanguage {
    GENGENLANG_CPP,
    GENGENLANG_PYTHON,
};

class GenGenFactory {
public:
    GenGenParser* GetGenGenParser(GenGenLanguage language);
};

#endif // GENGENFACTORY_H
