#ifndef MYCLASS_H
#define MYCLASS_H
#include<iostream>

using namespace std;
class MyClass
{

    public :
    int x;

    static int nb;

    public:
        MyClass();
    protected:
    private:

    public:
    void affiche()
    {
         cout <<"affiche MyClass.h"<<endl;
    }

    public:
    MyClass(int x)
    {
        this->x=x;
    }

    public :
    void succ()
    {
        this->x++;
    }

    public :
    int getX()
    {
         return this->x;
    }

};

#endif // MYCLASS_H
