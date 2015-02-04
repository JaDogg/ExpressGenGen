#ifndef POSTPARSER_H
#define POSTPARSER_H
#include <iostream>
#include <string>
class PostParser {
public:
    virtual void PostParse(std::string code);
};

#endif // POSTPARSER_H
