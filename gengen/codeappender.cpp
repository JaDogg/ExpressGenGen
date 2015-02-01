#include "codeappender.h"

void CodeAppender::AppendToPreHeader(const std::string& code)
{
    mStdStrPreHeader += (code + "\n");
}

std::string CodeAppender::GetPreHeader()
{
    return mStdStrPreHeader;
}

void CodeAppender::AppendToHeader(const std::string& code)
{
    mStdStrHeader += (code + "\n");
}

std::string CodeAppender::GetHeader()
{
    return mStdStrHeader;
}

void CodeAppender::AppendToCodeBody(const std::string& code)
{
    mStdStrCodeBody += (code + "\n");
}

std::string CodeAppender::GetCodeBody()
{
    return mStdStrCodeBody;
}

void CodeAppender::AppendToFooter(const std::string& code)
{
    mStdStrFooter += (code + "\n");
}

std::string CodeAppender::GetFooter()
{
    return mStdStrFooter;
}

void CodeAppender::AppendToPostFooter(const std::string& code)
{
    mStdStrPostFooter += (code + "\n");
}

std::string CodeAppender::GetPostFooter()
{
    return mStdStrPostFooter;
}
