#include <iostream>

using namespace std;

int main()
{
    int a=5;
    int *b;
    b=&a;
    b--;
    cout <<b << endl;
    return 0;
}
