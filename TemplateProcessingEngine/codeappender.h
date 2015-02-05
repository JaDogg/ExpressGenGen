#ifndef CODEAPPENDER_H
#define CODEAPPENDER_H
#include <string>

enum BlockType {
    BLOCK_PREHEADER,
    BLOCK_HEADER,
    BLOCK_FOOTER,
    BLOCK_POSTFOOTER,
    BLOCK_CODE,
    BLOCK_UNKNOWN
};

class CodeAppender {
private:
    std::string mStdStrPreHeader;
    std::string mStdStrHeader;
    std::string mStdStrCodeBody;
    std::string mStdStrFooter;
    std::string mStdStrPostFooter;

public:
    virtual std::string GetPreHeader();
    virtual std::string GetHeader();
    virtual std::string GetCodeBody();
    virtual std::string GetFooter();
    virtual std::string GetPostFooter();
    virtual void Append(const std::string& code, BlockType blockType);
};

#endif // CODEAPPENDER_H
