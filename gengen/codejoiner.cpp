#include "codejoiner.h"

CodeJoiner::CodeJoiner(CodeAppender codeAppender, StaticCodeGetter* staticCodeGetter)
{
    mStdStrCode += staticCodeGetter->GetBeforePreHeader();

    mStdStrCode += codeAppender.GetPreHeader();
    mStdStrCode += staticCodeGetter->GetAfterPreHeader();

    mStdStrCode += codeAppender.GetHeader();
    mStdStrCode += staticCodeGetter->GetAfterHeader();

    mStdStrCode += codeAppender.GetCodeBody();
    mStdStrCode += staticCodeGetter->GetBeforeFooter();

    mStdStrCode += codeAppender.GetFooter();
    mStdStrCode += staticCodeGetter->GetAfterFooter();

    mStdStrCode += codeAppender.GetPostFooter();
    mStdStrCode += staticCodeGetter->GetAfterPostFooter();
}

std::string CodeJoiner::GetCode()
{
    return mStdStrCode;
}
