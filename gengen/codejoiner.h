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
    std::string GetCode();
};

#endif // CODEJOINER_H
