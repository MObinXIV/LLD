// observer -> The Channel which 'll notify all it's users 

#include<iostream>
#include<list>
using namespace std;


// To combine all the subscribers in our channel 
class ISubscriber
{
    public: 

    virtual void notify(string msg)=0;
};


// Assign user to subscriber guy 
class User : public ISubscriber
{
    private:

    int userId;

    public:

    User(int userId)
    {
        this->userId=userId;
    }

    void notify(string msg)
    {
        cout<<"User"<<userId<<"received msg "<<msg<<endl;
    }
};

class Group
{
    list<ISubscriber*> users;

    public:

    void subscribe(ISubscriber*user)
    {
        users.push_back(user);
    }

    void unsubscribe (ISubscriber*user)
            {users.remove(user);}

            void notify(string msg)
            {
                for (auto user:users)
                user->notify(msg);
            }
};

int main()
{
    Group* group = new Group();

// create some users
    User* user1=new User(1);

    User*user2=new User(2);

    User*user3=new User(3);

    // Assign them to our channel 

    group->subscribe(user1);
    group->subscribe(user2);

    group->subscribe(user3);


// notify them all
    group ->notify("new msg");


// remove user 
    group ->unsubscribe(user1);

// Test notification functionality
    group->notify("new msg");
}