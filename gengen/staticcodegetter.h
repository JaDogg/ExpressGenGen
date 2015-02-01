#ifndef STATICCODEGETTER_H
#define STATICCODEGETTER_H
#include <string>

class StaticCodeGetter {
public:
    virtual std::string GetBeforePreHeader() = 0; // our header message
    virtual std::string GetAfterPreHeader() = 0; // our includes and functions before main()
    virtual std::string GetAfterHeader() = 0; // int main(){
    virtual std::string GetBeforeFooter() = 0; // }
    virtual std::string GetAfterFooter() = 0; // functions after main()
    virtual std::string GetAfterPostFooter() = 0; // our post code ex=> if __init__ == '__main__':
    virtual unsigned int GetStartingIndent() = 0; // get starting indent of all line code, doesn't affect block code
};

#endif
