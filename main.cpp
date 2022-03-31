#include "Reverse.h"
#include <string>
#include <iostream>
int main()
{
    Reverse R2;
    int value = -123;
    int Rdigit = R2.reverseDigit(value);
    std::cout << "" << Rdigit;
    std::cout << "\n";
    return 0;
    
    Reverse R1;
    std::string string = "hello";
    std::string rString = R1.reverseString(string);
    std::cout << "" << rString;
    std::cout << "\n";
    return 0;
}
