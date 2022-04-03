#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <vector>
class EfficientTruckloads
{
private:
    int trucks;
    std::vector<int> lookupTable;
public:
    EfficientTruckloads();
    int numTrucks(int numCrates, int loadSize);
    ~EfficientTruckloads();
};
#endif