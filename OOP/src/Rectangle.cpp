#include<iostream>
using namespace std;

class Rectangle
{
    private : int x;
    private : int y;

    public :
    Rectangle(int x , int y)
    {
        this->x=x;
        this->y=y;
    }

    public :
    int getX()
    {
        return this->x;
    }

    public :
    int getY()
    {
        return this->y;
    }

    public :
    void setX(int x)
    {
        this->x=x;
    }

    public :
    void setY(int y)
    {
       this->y=y;
    }

    public :
    int perimater()
    {
        return (this->x+this->y)*2;
    }

    public :
    int surface()
    {
         return (this->x*this->y);
    }
};
