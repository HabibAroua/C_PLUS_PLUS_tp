#include <iostream>
#include <cstdlib>

using namespace std;

void printSomething();
void somme(int a , int b);
double sqr(int x);

int main()
{
    printSomething();
    cout <<endl;
    somme(2,3);
    cout <<endl;
    cout <<sqr(5) <<endl;
    cout <<endl;
    cout << rand();
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

double sqr(int x)
{
   return x*x;
}
