/*
We 'll create a factory class to handle all the if else and type issues 
to make the client care only about choosing the type , and make myself free to add 
without annoying the clients with my own shits 
*/
#include <iostream>

using namespace std;

class Vehicle
{
public:
    virtual void createVehicle() = 0;
};

class car : public Vehicle
{
public:
    void createVehicle()
    {
        cout << "Creating car \n";
    }
};

class Bike : public Vehicle
{
public:
    void createVehicle()
    {
        cout << "Creating bike\n";
    }
};

class vehicleFactory{
public:
    static Vehicle*getVehicle(string vecType){
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
};
int main()
{
    string type;

    cin >> type;

            // Client use a factory to create a product 
    Vehicle*v= vehicleFactory::getVehicle(type); // Get the benefit of static defintion
    v->createVehicle();
    
}
