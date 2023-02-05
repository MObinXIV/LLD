
// Factory 


// #include<iostream>

// using namespace std;

// class Course 
// {
//     public:

//     virtual void createCourse()=0;

// };


// class Programming : public Course
// {
//     public:

//     void createCourse(){
//         cout<<"OOP course \n";
//     }
// };

// class English : public Course{
//     public:

//     void createCourse()
//     {
//         cout<<"This an English course\n";
//     }
// };

// int main()
// {
//         string type;

//         cin>>type;

//                 Course*c;
//         if(type == "English")
//             c= new English();

//             else if (type=="Programming")

//             c=new Programming();

//             c->createCourse();
// }



// Solution

// class Course
// {
//         public:
//             virtual void createCourse() = 0;
// };

// class Programming : public Course
// {
//         public:
//             void createCourse()
//             {
//             cout << "OOP course \n";
//             }
// };

// class English : public Course
// {
//         public:
//             void createCourse()
//             {
//             cout << "This an English course\n";
//             }
// };


// class Factory
// {

// public:

// static Course* getCourse(string type)
// {
//             Course *c;
//                     if(type == "English")
//                         c= new English();

//                         else if (type=="Programming")

//                         c=new Programming();

//                         return c;
// }

// };

// int main()
// {
//     string type;

//     cin>>type;

//     Course*c= Factory::getCourse(type);
//     c->createCourse();
// }

// #include <iostream>

// #include<thread>

// #include<mutex>

// using namespace std;
// class Logger
// {

//     private:

//     static int ctr; // helps to count the number of instances which created from class

//         static mutex mtx;
//     Logger()
//     {
//         ctr++;
//         cout << "New instance created number of instances = "<<ctr<<endl;
//     }

//         static Logger*loggerInstance;
//     public:

//     static Logger*getInstance();

//     void log(string msg){
//         cout<< msg<<endl;
//     }
    

// };

// mutex Logger ::mtx;
// int Logger :: ctr=0;

// Logger* Logger::getInstance(){

//     // Do double mutex check 
    
//     if(loggerInstance==nullptr){
//         mtx.lock();
//     // Check if we 've never created object we create it 
//     if(loggerInstance==nullptr)
//     {
//         loggerInstance=new Logger();
//     }
//     mtx.unlock();
//     }
//     return loggerInstance;

// }

// Logger* Logger::loggerInstance =nullptr;

// void user1Log()
// {
//     Logger *logger1 = Logger::getInstance();

//     logger1->log("Lol is lol");
// }
// void user2Log()
// {
//     Logger *logger2 = Logger::getInstance();

//     logger2->log("haha is hahaa");
// }
// int main()

// {
//    thread t1(user1Log);
//    thread t2(user2Log);
//    t1.join();
//    t2.join(); 
// }



/*#include<iostream>

#include<list>

using namespace std;

class ISubscriber {
    public:

    virtual void notify(string msg)=0;
};

class User{

    private:

    int userId;

    public:

    User(int userId){
        this->userId=userId;
    }

    void notify(string msg){
        cout << "User" << userId << "received msg " << msg << endl;
    }

};


class Group{
    private:

    list<ISubscriber*>users;

    public:
        void Subscribe(ISubscriber*user)
        {
        users.push_back(user);
        }
        void unsubscribe(ISubscriber *user)
        {
        users.remove(user);
        }

        void notify(string msg)
        {
        for (auto user : users)
            user->notify(msg);
        }
};


int main()
{
        Group *group = new Group();

        // create some users
        User *user1 = new User(1);

        User *user2 = new User(2);

        User *user3 = new User(3);

        // Assign them to our channel

        group->subscribe(user1);
        group->subscribe(user2);

        group->subscribe(user3);

        // notify them all
        group->notify("new msg");

        // remove user
        group->unsubscribe(user1);

        // Test notification functionality
        group->notify("new msg");
}*/

