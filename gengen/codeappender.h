#ifndef CODEAPPENDER_H
#define CODEAPPENDER_H
#include <string>
class CodeAppender {
private:
    std::string mStdStrPreHeader;
    std::string mStdStrHeader;
    std::string mStdStrCodeBody;
    std::string mStdStrFooter;
    std::string mStdStrPostFooter;

public:
    virtual void AppendToPreHeader(const std::string& code);
    virtual std::string GetPreHeader();
    virtual void AppendToHeader(const std::string& code);
    virtual std::string GetHeader();
    virtual void AppendToCodeBody(const std::string& code);
    virtual std::string GetCodeBody();
    virtual void AppendToFooter(const std::string& code);
    virtual std::string GetFooter();
    virtual void AppendToPostFooter(const std::string& code);
    virtual std::string GetPostFooter();
};

#endif // CODEAPPENDER_H
