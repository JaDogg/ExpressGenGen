#include "lualinecodegenerator.h"

void LuaLineCodeGenerator::StartLine()
{
    mLineCode = std::string("");
    mLineCode += "io.write(";
}
void LuaLineCodeGenerator::EndLine()
{
    mLineCode += "#<<end>>";
}

void LuaLineCodeGenerator::WriteCodePrintingCode(const std::string& escapedCodeToPrint)
{
    mLineCode += "\"";
    mLineCode += escapedCodeToPrint;
    mLineCode += "\", ";
}
void LuaLineCodeGenerator::WriteCode(const std::string& code)
{
    mLineCode += code;
    mLineCode += ", ";
}
std::string LuaLineCodeGenerator::GetGeneratedCode()
{
    boost::replace_last(mLineCode, "#<<end>>", "\"\\n\")");
    return mLineCode;
}


