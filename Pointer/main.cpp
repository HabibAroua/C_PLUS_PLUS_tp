#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name="Suszanne";
    cout << "Hello world! " <<name << endl;
    char a='x';
    cout <<"The char is "<<a <<endl;
    int x=1;
    int y=2;
    bool test=x==y;
    cout << "Test is "<<test <<endl;
    int tab[10];
    for (int i=0 ; i<5 ; i++)
    {
         cout <<"Tapez la case "<< i <<endl;
         cin >>tab[i];
    }
    for(int i=0 ; i<5 ; i++)
    {
         cout <<tab[i] <<" ";
    }
    return 0;
}
