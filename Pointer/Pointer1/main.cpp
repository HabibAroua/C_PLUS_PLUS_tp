#include <iostream>

using namespace std;

int main()
{
    int *p = new int;
    *p = 5;
    *p=*p+1;
    cout << *p<<endl;

    //Free
    int *p1 = new int; // request memory
    *p1 = 5; // store value
    cout << *p1 << endl; // use value
    delete p1; // free up the memory
    cout << *p1 <<endl;
    //array
    int *tab = NULL; // Pointer initialized with null
    tab = new int[20]; // Request memory
    for(int i=0 ; i<5 ; i++)
    {
        cout <<"enter case "<<i<<endl;
        cin >>tab[i];
    }

    for(int i=0 ; i<5 ; i++)
    {
         cout <<tab[i]<<" ";
    }

    cout <<endl;

    delete [] tab;// Delete array pointed to by tab
    cout <<tab[1] ;
    cout <<endl;

    //sizeOf
    //count size
    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    int var = 50;
    cout << "var: " << sizeof(var) << endl;

    return 0;
}
