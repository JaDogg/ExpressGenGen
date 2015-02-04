#ifndef GENGENFACTORY_H
#define GENGENFACTORY_H
#include "gengenparser.h"
#include "postparser.h"
#include "languages/cpp/cpplinecodegenerator.h"
#include "languages/cpp/cppstaticcodegetter.h"
#include "languages/python/pythonlinecodegenerator.h"
#include "languages/python/pythonstaticcodegetter.h"
#include "languages/web/weblinecodegenerator.h"
#include "languages/web/webstaticcodegetter.h"
enum GenGenLanguage {
    GENGENLANG_CPP,
    GENGENLANG_PYTHON,
    GENGENLANG_WEB
};

class GenGenFactory {
public:
    GenGenParser* GetGenGenParser(GenGenLanguage language);
};

#endif // GENGENFACTORY_H
