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
        std::cout << "Intm Value: " << intm;
        std::cout << "\n";
        rValue = (rValue * 10) + intm;
        std::cout << "rValue: " << rValue;
        std::cout << "\n";
        reverseDigit(value/10);
    }
    else{
        std::cout << "Invalid Digit!\n";
        return value;
    }
    
    return rValue;
}
std::string Reverse::reverseString(std::string letters){
    int l = letters.size();
    if (l == 0)
    {
        std::cout << "Invalid string!\n";
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
