#include "factory.hpp"

Vehicle *vehicleFactory ::getVehicle(string vecType)
{
    Vehicle *v;
    if (vecType == "car")
    {

        v = new car();
    }

    else if (vecType == "bike")
    {
        v = new Bike();
    }

    return v;
}
