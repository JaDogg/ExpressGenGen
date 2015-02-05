#ifndef PYTHONLINECODEGENERATOR_H
#define PYTHONLINECODEGENERATOR_H
#include "TemplateProcessingEngine/linecodegenerator.h"
#include <boost/algorithm/string/replace.hpp>
class PythonLineCodeGenerator : public LineCodeGenerator {
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

#endif // PYTHONLINECODEGENERATOR_H
