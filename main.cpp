#include "gengen/gengenfactory.h"

void PrintHelp()
{
    std::cout << "GenGen a Code Generator Generator" << std::endl;
    std::cout << "                 -Bhathiya Perera" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "How to use it:" << std::endl;
    std::cout << "GenGen <meta-language>" << std::endl;
    std::cout << "GenGen --help : print help" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Meta Languages:" << std::endl;
    std::cout << "cpp, python, web" << std::endl;
}

int main(int argc, char** argv)
{
    GenGenLanguage lang = GENGENLANG_CPP;

    if (argc == 2) {
        if (boost::equals(argv[1], "--help")) {
            PrintHelp();
            return 0;
        } else if (boost::equals(argv[1], "cpp")) {
            lang = GENGENLANG_CPP;
        } else if (boost::equals(argv[1], "python")) {
            lang = GENGENLANG_PYTHON;
        } else if (boost::equals(argv[1], "web")) {
            lang = GENGENLANG_WEB;
        } else {
            std::cerr << "Language Not Found." << std::endl;
            PrintHelp();
            return 1;
        }
    } else if (argc > 2) {
        std::cerr << "Too Many Arguments." << std::endl;
        PrintHelp();
        return 1;
    }

    GenGenParser* gengen = GenGenFactory().GetGenGenParser(lang);
    gengen->Parse();
    std::cout << gengen->GetCode() << std::endl;
    delete gengen;

    return 0;
}
