#include "Truckloads.h"
#include <iostream>

int main()
{
    Truckloads T;
    int trucks = T.numTrucks(1024, 5);
    std::cout << "Trucks: " << trucks;
    std::cout << "\n";
    return 0;
}
