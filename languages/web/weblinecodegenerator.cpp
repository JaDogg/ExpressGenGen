#include "weblinecodegenerator.h"

void WebLineCodeGenerator::StartLine()
{
    mLineCode = std::string("");
    mLineCode += "code += html([";
}
void WebLineCodeGenerator::EndLine()
{
    mLineCode += "#<<end>>";
}
void WebLineCodeGenerator::EscapedAppend(std::string& token, char c)
{
    if (c == '\'') {
        token += "\\'";
    } else {
        token.push_back(c);
    }
}
void WebLineCodeGenerator::WriteCodePrintingCode(const std::string& escapedCodeToPrint)
{
    mLineCode += "'";
    mLineCode += escapedCodeToPrint;
    mLineCode += "', ";
}
void WebLineCodeGenerator::WriteCode(const std::string& code)
{
    mLineCode += code;
    mLineCode += ", ";
}
std::string WebLineCodeGenerator::GetGeneratedCode()
{
    boost::replace_last(mLineCode, ", #<<end>>", "].join('')); code += '<br />';");
    return mLineCode;
}

std::string WebLineCodeGenerator::CalculateIndent(unsigned int amount)
{
    std::string str("");
    for (unsigned int i = 0; i < amount; i++) {
        str.append("  ");
    }
    return str;
}
