#include <iostream>

using namespace std;

void printSomething();
void somme(int a , int b);

int main()
{
    printSomething();
    cout <<endl;
    somme(2,3);
    return 0;
}

void printSomething()
{
  cout << "Hi there!";
}

void somme(int a , int b)
{
    int s=a+b;
    cout<<"La somme est "<<s<<endl;
}
