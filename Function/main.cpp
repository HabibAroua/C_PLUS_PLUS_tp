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
    cout <<endl;

    for (int x = 1; x <= 10; x++)
    {
         cout << 1 + (rand() % 6) << endl;
    }
    //srand

    srand(100);

    for (int x = 1; x <= 10; x++)
    {
        cout << 1 + (rand() % 6) << endl;
    }
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
