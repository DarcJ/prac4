#include "EfficientTruckloads.h"
#include <vector>
#include <iostream>
using namespace std;


EfficientTruckloads::EfficientTruckloads()
{
    trucks = 0;
}
int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    
    if (lookupTable.size() < numCrates)
    {
        lookupTable.resize(numCrates+1);
    }

    if (numCrates <= 0 || loadSize <= 0)
    {
        return lookupTable.at(numCrates);
    }
    
    if (lookupTable.at(numCrates) != 0)
    {
        return lookupTable.at(numCrates);
    }
   else if (lookupTable.at(numCrates) == 0)
    {
        if (numCrates <= loadSize)
        {
            return 1;
        }
        else if (numCrates > loadSize)
        {
            if (numCrates%2 == 0) //i.e. even division with no remainder
            {
                lookupTable.at(numCrates)= numTrucks(numCrates/2, loadSize)+ numTrucks(numCrates/2, loadSize);
            }
            else
            {
                lookupTable.at(numCrates) = numTrucks(numCrates/2, loadSize)+ numTrucks((numCrates+1)/2, loadSize);
            }
        }

}
    return lookupTable.at(numCrates);
}

EfficientTruckloads::~EfficientTruckloads()
{

}
