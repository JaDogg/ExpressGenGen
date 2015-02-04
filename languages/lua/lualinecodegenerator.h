#ifndef LUALINECODEGENERATOR_H
#define LUALINECODEGENERATOR_H
#include "gengen/linecodegenerator.h"
#include "languages/cpp/cpplinecodegenerator.h"
#include <boost/algorithm/string/replace.hpp>
class LuaLineCodeGenerator : public CppLineCodeGenerator {
public:
    virtual void StartLine();
    virtual void EndLine();
    virtual void WriteCodePrintingCode(const std::string& escapedCodeToPrint);
    virtual void WriteCode(const std::string& code);
    virtual std::string GetGeneratedCode();

private:
    std::string mLineCode;
};

#endif // LUALINECODEGENERATOR_H
