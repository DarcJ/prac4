#include "EfficientTruckloads.h"
#include <vector>
using namespace std;

vector<int> lookupTable;
 

EfficientTruckloads::EfficientTruckloads()
{

}
int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    
    if (numCrates <= 0 || loadSize <= 0)
    {
        return;
    }
    if (numCrates <= loadSize)
    {
        lookupTable[numCrates] = 1;
    }
    else if (numCrates > loadSize)
    {
        if (numCrates%2 == 0) //i.e. even division with no remainder
        {
            lookupTable[numCrates] = lookupTable[numCrates/2]+lookupTable[numCrates/2];
            numTrucks(numCrates/2, loadSize);
            numTrucks(numCrates/2, loadSize);
        }
        else
        {
            lookupTable[numCrates] = lookupTable[numCrates/2]+lookupTable[(numCrates+1)/2];
            numTrucks(numCrates/2, loadSize);
            numTrucks((numCrates+1)/2, loadSize);
        }
    }
    return lookupTable[numCrates];
}

EfficientTruckloads::~EfficientTruckloads()
{
}
