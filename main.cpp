#include <iostream>
#include "gengen/gengenfactory.h"

int main(int argc, char** argv)
{
    GenGenParser* gengen = GenGenFactory().GetGenGenParser(GENGENLANG_PYTHON);
    gengen->Parse();
    std::cout << gengen->GetCode() << std::endl;
    delete gengen;
    return 0;
}
