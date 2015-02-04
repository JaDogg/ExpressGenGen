#ifndef CODEJOINER_H
#define CODEJOINER_H
#include <string>
#include "codeappender.h"
#include "staticcodegetter.h"

class CodeJoiner {
private:
    std::string mStdStrCode;

public:
    CodeJoiner(CodeAppender codeAppender, StaticCodeGetter* staticCodeGetter);
    virtual std::string GetCode();
};

#endif // CODEJOINER_H
