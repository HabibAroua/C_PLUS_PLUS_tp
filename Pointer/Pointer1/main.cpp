#include <iostream>

using namespace std;

int main()
{
    int *p = new int;
    *p = 5;
    *p=*p+1;
    cout << *p<<endl;
    return 0;
}
