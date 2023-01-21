#include<bits/stdc++.h>

using namespace std;
class shape{
    public:
    virtual int area()=0;
};

class Rectangle: public shape
{
public:
    int width, height;
    Rectangle() {}

    Rectangle(int width, int height)
    {

        this->width = width;
        this->height = height;
    }

    void setWidth(int width)
    {
        this->width = width;
    }

    void setHeight(int height)
    {
        this->height = height;
    }

    int area()
    {
        return width * height;
    }
};
class Square : public shape
{
    int x;
public:
    Square(int x)
    {
        this->x=x;
    }

    int area(){

        return x*x;
    }
    
};