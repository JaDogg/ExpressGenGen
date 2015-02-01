#include "cpplinecodegenerator.h"

void CppLineCodeGenerator::StartLine()
{
    mLineCode = std::string("");
    mLineCode += "std::cout ";
}
void CppLineCodeGenerator::EndLine()
{
    mLineCode += " << std::endl;";
}
void CppLineCodeGenerator::EscapedAppend(std::string& token, char c)
{
    if (c == '"') {
        token += "\\\"";
    } else {
        token.push_back(c);
    }
}
void CppLineCodeGenerator::WriteCodePrintingCode(const std::string& escapedCodeToPrint)
{
    mLineCode += " << \"";
    mLineCode += escapedCodeToPrint;
    mLineCode += "\"";
}
void CppLineCodeGenerator::WriteCode(const std::string& code)
{
    mLineCode += " << ";
    mLineCode += code;
}
std::string CppLineCodeGenerator::GetGeneratedCode()
{
    return mLineCode;
}

std::string CppLineCodeGenerator::CalculateIndent(unsigned int amount)
{
    std::string str("");
    for (unsigned int i = 0; i < amount; i++) {
        str.append("    ");
    }
    return str;
}
