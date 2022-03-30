#include "Reverse.h"
#include <string>
#include <iostream>
int main()
{
    Reverse R;
    std::string string = "hello";
    std::string rString = R.reverseString(string);
    std::cout << "" << rString;
    std::cout << "\n";
    return 0;
}
