#include "Reverse.h"
#include <iostream>
Reverse::Reverse()
{
    rValue = 0;
    intm = 0;
}
int Reverse::reverseDigit(int value){
    if (value > 0)
    {
        intm = value % 10;
        rValue = (rValue * 10) + intm;
        reverseDigit(value/10);
    }
    else if (value < 0)
    {
        return value;
    }
    else
    {
        return value;
    }

    return rValue;
}
std::string Reverse::reverseString(std::string letters){
    int l = letters.size();
    if (l == 0)
    {
        return letters;
    }
    else if (l > 0)
    {
        rString = rString + letters[l-1];
        reverseString(letters.substr(0, l-1));
    }

    return rString;

}
Reverse::~Reverse()
{
}
