#include<iostream>

using namespace std;

// Create general car class 
class Car 
{
    public:

    virtual void createCar()=0;
};

// Inherit for brands


class ToyotaCar :public Car
{
    public:

    void createCar(){
        cout<<"Toyota Car\n";
    }

};

class BMCar : public Car
{
    public:

        void createCar()
        {
            cout<<"BM Car\n";
        }
};


// Create another general bike class 
class Bike{
    public:

    virtual void createBike()=0;
};



// Inherit for brands 


class BMBike:public Bike{
        public:

        void createBike(){
            cout<<"BM Bike\n";
        }
};

class ToyotaBike :public Bike
{
public:
    void createBike()
    {
            cout << "Toyota Bike\n";
    }
};


// General factory to organize our 2 vehicles

class IFactory
{
    public:
    virtual Car* createCar()=0;

    virtual Bike*createBike()=0;
};


// Brand to create the brand whole vehicles
class BMFactory : public IFactory
{
    public:

        // in case of the brand create car we return it
    Car*createCar(){
        return new BMCar();
    }

// return bike 
    Bike*createBike(){
        return new BMBike();
    }
};

class ToyotaFactory : public IFactory
{
public:
    Car *createCar()
    {
        return new ToyotaCar();
    }

    Bike *createBike()
    {
        return new ToyotaBike();
    }
};


// Factory to decide which brand we 'll use 
class AbstractFactory
{
    public:

    static IFactory* createFactory(string brand){

        if(brand=="BM")
        return new BMFactory();

        else 

        return new ToyotaFactory();
    }
};

    int  main()
{
    
    cout <<"Enter Your vehicle brand \n";

    string brand;

    cin>>brand;

// Get the company or the brand we want 
    IFactory*fact= AbstractFactory::createFactory(brand);


   // Create what we want from the brand 
    Car*car=fact->createCar();
    car->createCar();
}