#ifndef WEBLINECODEGENERATOR_H
#define WEBLINECODEGENERATOR_H
#include "gengen/linecodegenerator.h"
#include <boost/algorithm/string/replace.hpp>
class WebLineCodeGenerator : public LineCodeGenerator {
public:
    void StartLine();
    void EndLine();
    void EscapedAppend(std::string& token, char c);
    void WriteCodePrintingCode(const std::string& escapedCodeToPrint);
    void WriteCode(const std::string& code);
    std::string GetGeneratedCode();
    virtual std::string CalculateIndent(unsigned int amount);

private:
    std::string mLineCode;
};

#endif // WEBLINECODEGENERATOR_H
