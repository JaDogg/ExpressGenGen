#ifndef CODEAPPENDER_H
#define CODEAPPENDER_H
#include <sstream>

class CodeAppender {
private:
    std::string mStdStrPreHeader;
    std::string mStdStrHeader;
    std::string mStdStrCodeBody;
    std::string mStdStrFooter;
    std::string mStdStrPostFooter;

public:
    void AppendToPreHeader(const std::string& code);
    std::string GetPreHeader();
    void AppendToHeader(const std::string& code);
    std::string GetHeader();
    void AppendToCodeBody(const std::string& code);
    std::string GetCodeBody();
    void AppendToFooter(const std::string& code);
    std::string GetFooter();
    void AppendToPostFooter(const std::string& code);
    std::string GetPostFooter();
};

#endif // CODEAPPENDER_H


