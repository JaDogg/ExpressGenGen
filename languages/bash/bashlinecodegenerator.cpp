#include "bashlinecodegenerator.h"

void BashLineCodeGenerator::StartLine()
{
    mLineCode = std::string("");
    mLineCode += "echo \"\"";
}
void BashLineCodeGenerator::EndLine()
{
    //do nothing
}
void BashLineCodeGenerator::EscapedAppend(std::string& token, char c)
{
    if (c == '"') {
        token += "\\\"";
    } else if (c == '\\') {
        token += "\\\\";
    } else if (c == '$') {
        token += "\\$";
    } else if (c == '`') {
        token += "\\`";
    } else {
        token.push_back(c);
    }
}
void BashLineCodeGenerator::WriteCodePrintingCode(const std::string& escapedCodeToPrint)
{
    mLineCode += "\"";
    mLineCode += escapedCodeToPrint;
    mLineCode += "\"";
}
void BashLineCodeGenerator::WriteCode(const std::string& code)
{
    mLineCode += code;
}
std::string BashLineCodeGenerator::GetGeneratedCode()
{
    return mLineCode;
}

std::string BashLineCodeGenerator::CalculateIndent(unsigned int amount)
{
    std::string str("");
    for (unsigned int i = 0; i < amount; i++) {
        str.append("  ");
    }
    return str;
}
