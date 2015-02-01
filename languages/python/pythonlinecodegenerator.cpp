#include "pythonlinecodegenerator.h"

void PythonLineCodeGenerator::StartLine()
{
    mLineCode = std::string("");
    mLineCode += "print(''.join([";
}
void PythonLineCodeGenerator::EndLine()
{
    mLineCode += "#<<end>>";
}
void PythonLineCodeGenerator::EscapedAppend(std::string& token, char c)
{
    if (c == '\'') {
        token += "\\'";
    } else {
        token.push_back(c);
    }
}
void PythonLineCodeGenerator::WriteCodePrintingCode(const std::string& escapedCodeToPrint)
{
    mLineCode += "'";
    mLineCode += escapedCodeToPrint;
    mLineCode += "', ";
}
void PythonLineCodeGenerator::WriteCode(const std::string& code)
{
    mLineCode += "str(";
    mLineCode += code;
    mLineCode += "), ";
}
std::string PythonLineCodeGenerator::GetGeneratedCode()
{
    boost::replace_last(mLineCode, ", #<<end>>", "]))");
    return mLineCode;
}

std::string PythonLineCodeGenerator::CalculateIndent(unsigned int amount)
{
    std::string str("");
    for (unsigned int i = 0; i < amount; i++) {
        str.append("    ");
    }
    return str;
}
