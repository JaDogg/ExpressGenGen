#ifndef LINECODEGENERATOR_H
#define LINECODEGENERATOR_H
#include <string>

class LineCodeGenerator {
public:
    virtual void StartLine() = 0;
    virtual void EndLine() = 0;
    virtual void EscapedAppend(std::string& token, char c) = 0;
    virtual void WriteCodePrintingCode(const std::string& escapedCodeToPrint) = 0;
    virtual void WriteCode(const std::string& code) = 0;
    virtual std::string GetGeneratedCode() = 0;
    virtual std::string CalculateIndent(unsigned int amount) = 0;
};
#endif // LINECODEGENERATOR_H
