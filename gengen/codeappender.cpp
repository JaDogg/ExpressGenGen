#include "codeappender.h"

std::string CodeAppender::GetPreHeader()
{
    return mStdStrPreHeader;
}

std::string CodeAppender::GetHeader()
{
    return mStdStrHeader;
}

std::string CodeAppender::GetCodeBody()
{
    return mStdStrCodeBody;
}

std::string CodeAppender::GetFooter()
{
    return mStdStrFooter;
}

std::string CodeAppender::GetPostFooter()
{
    return mStdStrPostFooter;
}

void CodeAppender::Append(const std::string &code, BlockType blockType)
{
    switch (blockType) {
    case BLOCK_PREHEADER:
        this->mStdStrPreHeader += (code + "\n");
        break;
    case BLOCK_HEADER:
        this->mStdStrHeader += (code + "\n");
        break;
    case BLOCK_FOOTER:
        this->mStdStrFooter += (code + "\n");
        break;
    case BLOCK_POSTFOOTER:
        this->mStdStrPostFooter += (code + "\n");
        break;
    case BLOCK_CODE:
        this->mStdStrCodeBody += (code + "\n");
        break;
    }
}
