// Attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.


// بعمل انترفيس و بشكل بيها اللى انا عايزه بدل ما افضل اعمل فى كلاسات مشتركة عمال على بطال 
#include<iostream>

using namespace std;

// Component
class Stream
{
    public:

   virtual void write(string data)=0;
};

// concrete component
class CloudStream : public Stream
{
    public:
   void write(string data)
   {
       cout << "Storing " << data << endl;
   }
};


// Decorator

class CompressedCloudStream : public Stream
{
   private:

    Stream*stream;

   string compress(string data)
   {

      return data.substr(0, 5);
   }

   public:

   CompressedCloudStream(Stream*stream){
    this->stream=stream;
   }
   void write(string data) override
   {

       string lol = compress(data);

       stream->write(lol); // using composition
   }
};

class EncryptedCloudStream : public Stream
{

   private:
   Stream*stream;
   string Encyrpt(string data)
   {

       return "@&#@%#%****!";
   }

   public:

   EncryptedCloudStream(Stream*stream){this->stream=stream;}
   void write(string data) override
   {

       string lol = Encyrpt(data);

       stream->write(lol);
   }
};

void storeCreditCard(Stream*stream){
    stream ->write("1242-24242-2332");
}
int main()

{
    storeCreditCard(new CloudStream);

// Wrapping or decorating with different decorators
    storeCreditCard(new EncryptedCloudStream( new CloudStream));

    storeCreditCard(new CompressedCloudStream(new CloudStream));


    // do multiple decorators which replaces creating class for both behaviors
    storeCreditCard(new EncryptedCloudStream( new CompressedCloudStream(new CloudStream)));
}
