#include<iostream>

#include "vehicle.hpp"
#include"bike.hpp"
#include "car.hpp"
using namespace std;



// class car : public Vehicle{
//     public:
//         void createVehicle(){
//             cout<<"Creating car \n";
//         }
// };


// class Bike : public Vehicle{
// public:
//    void createVehicle(){
//         cout<<"Creating bike\n";
//     }
// };


int main()
{
    string type;

    cin>>type;

        Vehicle*v;
    if(type=="car"){

        v= new Car();
    }

    else if(type=="bike")
    {
        v= new Bike();
    }

    v->createVehicle();
}

/*
What's the problem here -> when we have a new product , we have to till the client with changes as it happens and do a lot of if elses with our 
new updates 
include every new file 
*/