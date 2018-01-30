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
    cout <<endl;
    int sum=0;
    for(int i=0 ; i<5 ; i++)
    {
         sum+=tab[i];
    }
    cout <<"The sum of element is "<<sum <<endl;
    int M[5][5];
    for(int i=0 ; i<5 ; i++)
    {
         for(int j=0 ; j<5 ; j++)
         {
             cout<<"M["<<i<<"]["<<j<<"]"<<endl;
             cin >>M[i][j];
         }
    }
    //Showing the matrix
    for(int i=0 ; i<5 ; i++)
    {
         for(int j=0 ; j<5 ; j++)
         {
             cout <<M[i][j]<<" ";
         }
         cout << endl;
    }

    //Pointer
    int score = 5;
    int *scorePtr;
    scorePtr = &score;
    cout << scorePtr << endl;

    return 0;
}
