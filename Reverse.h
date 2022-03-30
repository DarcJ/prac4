#ifndef REVERSE_H
#define REVERSE_H

#include <string>
#include <iostream>

class Reverse
{
private:
    int rValue;
    int intm;
    std::string rString;
public:
    Reverse();
    int reverseDigit(int value);
    std::string reverseString(std::string letters);
    ~Reverse();
};

#endif