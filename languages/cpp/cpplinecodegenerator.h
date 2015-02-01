#ifndef CPPLINECODEGENERATOR_H
#define CPPLINECODEGENERATOR_H
#include "gengen/linecodegenerator.h"
class CppLineCodeGenerator : public LineCodeGenerator
{
public:
    void StartLine();
    void EndLine();
    void EscapedAppend(std::string &token, char c);
    void WriteCodePrintingCode(const std::string &escapedCodeToPrint);
    void WriteCode(const std::string &code);
    std::string GetGeneratedCode();
    virtual std::string CalculateIndent(unsigned int amount);
private:
    std::string mLineCode;

};

#endif // CPPLINECODEGENERATOR_H
