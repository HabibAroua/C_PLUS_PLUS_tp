#include <iostream>
#include "src/BankAccount.cpp"
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
    cout << myObj.name;
    return 0;
}
