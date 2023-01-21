#include<bits/stdc++.h>

using namespace std;

class Rectangle
{
    public:
    int width , height;
    Rectangle(){}

    Rectangle(int width , int height){

        this->width=width;
        this->height=height;
    }

    void setWidth(int width){
        this->width=width;
    }

    void setHeight(int height)
    {
        this->height = height;
    }

    int area(){
        return width *height;
    }
};

class Square : public Rectangle
{
    public:
    Square()
    {
        
    }
    void setWidth(int width)
    {
        this->width = width;
        this->height=width;
    }

    void setHeight(int height)
    {
        this->height = height;
        this->width = height;
    }

};

// function which creates the problem 
void increaseRectangleWidth(Rectangle &rect){
    rect.setWidth(rect.width+1);
}
int main()
{
        Rectangle rect(5,6);

// it 'll increase both sides not one only
        Square sq;
        sq.setHeight(5);

        increaseRectangleWidth(rect);
        increaseRectangleWidth(sq);

        cout <<rect.area()<<endl;

        cout<<sq.area()<<endl;


}