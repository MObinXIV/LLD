#include<iostream>

#include<list>

using namespace std;

enum Time{};
class Aircraft
{
    map<string,Seat*>seats;

    public:

    bool fixSeat(Seat s , Customer c)
    {
        if (s.getCustommer!=nullptr) return false;
        s.setCustomer(c);
        return true;
    }

    bool addSeat(Seat s){}
};

enum Seat{
Emergency,
Luxury,
Normal
};

class Customer{

    private:

    string id;
    string email;
    int price;

public:
Customer*customer;

bool fixSeat(Flight*flight , Seat*seat)
{
    bool isBooked=flight.aircraft.fixSeat(seat,this);
    if (isBooked)
    return true;

    else

    return false;
}

bool cancelBooking(Flight*flight)
{
    flight->cancelForCustomer(this);
    return true;
}


};
class  SEAT
{
    private:
    Seat*type;
    string id;
    int price;
    public:
    Customer* customer;

};

class Flight{
   public:

   string date;

   string src;
   string dst;
    string startTime;
    string endTime;
    Aircraft*aircraft;

    bool cancelForCustomer(Customer c)
    {
        map<string, Seat *> = flight.aircraft.getSeat();

        for (Seat seat :seats.value())
        if(seat.getCustomer()==c)
        seat.setCustomer(nullptr);

        return true;
    }
};



// System acts as a singleton class 
class System{
    private:
        System(){}

        static System*SysInstance;

        list<Flight*>flights;
        public:

        static System* getSystem(){
            if (SysInstance = nullptr)

            SysInstance=new System();
            
            return SysInstance;
        }


        list<Flight*> fetchFlight(string src, string dst, string date)
        {
            list<Flight*>filteredFlights;

            for (auto flight:flights)
            {
                if(flight->date==date && flight->src==src && flight->dst==dst)

                filteredFlights.push_back(flight);
            }

        }

        bool fixSeat(Aircraft*airCraft,Seat*seat)
        {
            Aircraft->fixSeat(seat,seat->getCustomer());

            retrun true;
        }

        bool addFlight{}

        bool canelFlight(Flight*flight){
            map<string,Seat*> = flight.aircraft.getSeat();
        }

        
};

System *System :: SysInstance=nullptr;

int main()
{
    
}