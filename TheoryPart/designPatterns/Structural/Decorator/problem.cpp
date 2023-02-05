#include<iostream>

using namespace std;

class Cloud{

    public:

   virtual void write (string data)
    {
        cout<<"Storing "<<data<<endl;
    }
};


class EncryptedCloudStream : public Cloud{

private:

string Encyrpt(string data){

return "@&#@%#%****!";
}

    public:

    void write (string data) override{

         string lol =Encyrpt(data);

        Cloud::write(lol);
    }
};


class CompressedCloudStream :public Cloud
{
private:
    string compress(string data)
    {

        return data.substr(0,5);
    }

public:
    void write(string data) override
    {

        string lol = compress(data);

        Cloud::write(lol);
    }
};



// The problem arises here when wanna to compress & encrypt data both together

class CompressedAndEncryptedData  : public Cloud{
/*
blablabla
*/
};

int main()
{

    Cloud*cloudStream=new EncryptedCloudStream;

        cloudStream->write("Here's some data");

        delete cloudStream;
}