// Singleton -> States that we need to use only one object from the class we use it in some cases like logger , db connection , conf manager ... etc
#include<iostream>
#include<string>
#include<thread>
#include<mutex>
using namespace std;
/*
Steps:
1- move constructor to private area to restrict the user from creating objects 
2- user static -> which indicates that a particular member belongs to class not object 
3- we use static feature to intialize the constructor only once inside the class & use this function instead of constructor
*/

/*
Pros :
- neat way to handle access to shared global resources 
- easy to implement
-guarantees 1 instance
- solves well-defined problem


Cons:

- Sometimes abused 
-used with parameters & confused with factory 
- hard to write unit tests
-Thread safety should be insured else can be dangerous 
*/

class logger{

private:
    logger()
    {

        ctr++;
        cout << "New instance created. No of instances " << ctr << endl;
    }
    // operator overLoading handle
    logger(const logger &)=delete;
    logger operator*(const logger &)=delete;
    static int ctr;

        static mutex mtx;

    static logger* loggerInstance ; // The single instance which gonna use by all the members 

    public:
        

        static logger* getLogger(){


                // double checked -> as we don't need this lock all the time , we only need it in the beginning  
                        if(loggerInstance==nullptr){
                    mtx.lock(); // handling multithreading problem
                // initstate it in the first time only , if it's not created we create it 
                if(loggerInstance==nullptr)
                {
                    loggerInstance=new logger();
                }
                mtx.unlock();}

            // otherwise it 'll also returned as is it
                return loggerInstance;
        }

        void log(string msg){
            cout<<msg<<endl;
        }
};

int logger :: ctr=0;

logger *logger :: loggerInstance=nullptr;

mutex logger ::mtx;


void user1Log(){
        logger *logger1 = logger::getLogger(); // use the static function not the constructor
        logger1->log("Come lets watch the rain is falling down");

}
        void user2Log()
        {
            logger *logger2 = logger::getLogger();
            logger2->log("SunLight on Your skin when I'm not around");
}


int main()
{

    thread t1(user1Log);

    thread t2(user2Log);

    t1.join();

    t2.join();

   
}