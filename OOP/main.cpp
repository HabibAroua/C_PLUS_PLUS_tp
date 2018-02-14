#include <iostream>
#include "src/BankAccount.cpp"
#include "src/Rectangle.cpp"

using namespace std;

class myClass
{
  public:
    string name;
};
int main()
{
    BankAccount test;
    test.sayHi();
    myClass myObj;
    myObj.name = "SoloLearn";
    cout << myObj.name <<endl;
    Rectangle r(1,2);
    cout <<" le valeur de x est "<<r.getX()<<endl;
    cout <<" le valeur de y est "<<r.getY()<<endl;
    r.setX(3);
    r.setY(3);
    cout <<" le valeur de x est "<<r.getX()<<endl;
    cout <<" le valeur de y est "<<r.getY()<<endl;
    cout <<"la surface est "<<r.surface()<<endl;
    cout <<"Le perimetre est "<<r.perimater()<<endl;

    return 0;
}
