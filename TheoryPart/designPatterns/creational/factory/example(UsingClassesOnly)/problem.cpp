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

int main()
{
    string type;

    cin >> type;

    Vehicle *v;
    if (type == "car")
    {

        v = new car();
    }

    else if (type == "bike")
    {
        v = new Bike();
    }

    v->createVehicle();
}

/*
What's the problem here -> User shouldn't about this whole stuffs 
*/