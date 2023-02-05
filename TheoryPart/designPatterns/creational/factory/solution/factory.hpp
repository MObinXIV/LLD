#ifndef factory_hpp

#define factory_hpp
# include<iostream>

#include "car.hpp"

#include "bike.hpp"

using namespace std;

class vehicleFactory
{
public:
    static Vehicle *getVehicle(string vecType);
    
};

#endif