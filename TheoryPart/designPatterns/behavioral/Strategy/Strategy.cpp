#include <iostream>

using namespace std ;

// compressor interface 
class Compressor 
{
    public:

    virtual void compress (string fileName)=0;
};

// implement the interface functionalities


class JpegCompressor : public Compressor
{
    public:
    void compress (string lol){
        cout <<"Compressing using Jpeg\n";
    }
};

class PNGCompressor : public Compressor
{
public:
    void compress(string lol)
    {
        cout << "Compressing using PNG\n";
    }
};


class Filter
{
public:
    virtual void filter(string fileName) = 0;
};

class BlackAndWhite : public Filter
{
public:

    void filter(string lol)
    {
        cout << "Filtering using B&W\n";
    }
};

class HighContrast : public Filter
{
public:
    void filter(string lol)
    {
        cout << "Filtering using High Contrast\n";
    }
};

class ImageStore
{


public:
    
    // Here we pass our operations in the parameters 
    void store(string fileName, Compressor *compressor, Filter *f)
    {
       // apply our operations

       compressor->compress(fileName);

        f->filter(fileName);
       
    }
};

int main()
{

    ImageStore*img=new ImageStore;

        img->store("Ctrl",new JpegCompressor,new BlackAndWhite);
    delete img;

}