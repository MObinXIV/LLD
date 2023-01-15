#include<iostream>
#include <vector>
using namespace std;

struct  date{};

// Here we 'll apply Singleton to class system
class Flight
{
};

class System{
private:
    vector<Flight>flight;

    System(){
    };

    static System*sysInstance;

    public:

    static System* getInstance(){
        if(sysInstance==nullptr){
            sysInstance=new System();
        }
        return sysInstance;
    }
};

System *System:: sysInstance=nullptr;



