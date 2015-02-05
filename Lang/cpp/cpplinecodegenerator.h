#ifndef CPPLINECODEGENERATOR_H
#define CPPLINECODEGENERATOR_H
#include "TemplateProcessingEngine/linecodegenerator.h"
class CppLineCodeGenerator : public LineCodeGenerator {
public:
    virtual void StartLine();
    virtual void EndLine();
    virtual void EscapedAppend(std::string& token, char c);
    virtual void WriteCodePrintingCode(const std::string& escapedCodeToPrint);
    virtual void WriteCode(const std::string& code);
    virtual std::string GetGeneratedCode();
    virtual std::string CalculateIndent(unsigned int amount);

private:
    std::string mLineCode;
};

#endif // CPPLINECODEGENERATOR_H
