#include "Truckloads.h"

Truckloads::Truckloads()
{
    trucks = 0;
}
int Truckloads::numTrucks(int numCrates, int loadSize){
    
    if (numCrates > loadSize)
    {
        if (numCrates%2 == 0) //i.e. even division with no remainder
        {
            numTrucks(numCrates/2, loadSize);
            numTrucks(numCrates/2, loadSize);
        }
        else
        {
            numTrucks(numCrates/2, loadSize);
            numTrucks((numCrates+1)/2, loadSize);
        }
    }
    else
    {
        trucks++;
    }
    return trucks;
}

Truckloads::~Truckloads()
{
}
