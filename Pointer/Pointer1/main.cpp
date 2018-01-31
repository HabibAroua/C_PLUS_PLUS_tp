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

    return 0;
}
