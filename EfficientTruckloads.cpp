#include "EfficientTruckloads.h"
#include <vector>
using namespace std;

vector<int> lookupTable;
 

Truckloads::Truckloads()
{
    trucks = 0;
}
int Truckloads::numTrucks(int numCrates, int loadSize){
    
    if (numCrates <= 0 || loadSize <= 0)
    {
        return trucks;
    }
    if (numCrates <= loadSize)
    {
        trucks++;
        //lookupTable[numCrates] = trucks;
    }
    else if (numCrates > loadSize)
    {
        //if (lookupTable.at(n) //not error/empty)
       // {
        //    next = lookupTable.at(n);
        //    nextNext = lookupTable.at
       // }
        else if (numCrates%2 == 0) //i.e. even division with no remainder
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
    return trucks;
}

Truckloads::~Truckloads()
{
}
