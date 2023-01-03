// observer -> notify a group of people , and update these notification to all people 

#include<iostream>
#include<list>
using namespace std;

class ISubscriber
{
    public:
            virtual void notify(string msg)=0;
};

class user:public ISubscriber
{
    private:

        int userId;

        public:

        user(int userId)
        {
            this->userId=userId;
        }
        void notify(string msg){
            cout<<"User"<<userId<<"received message "<<msg<<endl;
        }
};

class Group
{
    list<ISubscriber*> users;

    public:

    void subscribe(ISubscriber*user){
        users.push_back(user);
    }

    void unSubscribe(ISubscriber*user)
    {
        users.remove(user);
    }

        // notify all users 
    void notify(string msg)
    {
        for(auto it: users)
        it->notify(msg);
    }
};

int main()
{
    Group*group =new Group();

    user*user1= new user(1);
     user*user2= new user(2);
     user *user3 = new user(3);

     group->subscribe(user1);
     group->subscribe(user2);
     group->subscribe(user3);
     group->notify("new msg");
     group->unSubscribe(user1);
     group->notify("new msg");

}