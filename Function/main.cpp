#include <iostream>
#include <cstdlib>

using namespace std;

void printSomething();
void somme(int a , int b);
double sqr(int x);
int fact(int x);
void printArray(int arr[], int size);

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
    cout <<endl;
    //    printSum(13);
    cout <<"the fact of 5 is "<<fact(5)<<endl;
    //use integer size
     int myArr[3]= {42, 33, 88};
    printArray(myArr, 3);
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

float sqr(float x)
{
    return x*x;
}

void printSum(int a, int b = 4)
{
 cout << a + b << endl;
}

int fact(int x)
{
     if (x == 1)
     {
         return 1;
     }
     else
     {
         return x * fact(x - 1);
     }
}

void printArray(int arr[], int size)
{
     for(int x=0; x<size; x++)
     {
          cout <<arr[x] <<" ";
     }
}
