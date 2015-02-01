#include <iostream>
#include "gengen/gengenfactory.h"

int main()
{
    GenGenParser gengen = GenGenParser(new CppLineCodeGenerator(),new CppStaticCodeGetter());
    gengen.Parse();
    std::cout << gengen.GetCode() << std::endl;
    return 0;
}
