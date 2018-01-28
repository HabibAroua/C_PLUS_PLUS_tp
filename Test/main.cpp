#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Hello world!" << endl;
    cout << "Donner un nombre 1 " <<endl;
    cin >> a;
    cout <<"Donner un nombre 2 "<<endl;
    cin >> b;
    int sum=a+b;
    cout <<"La somme de "<< a << " et "<< b <<" ="<<sum <<endl;
    sum++;
    cout <<"Le nouveau valeur est "<<sum <<endl;
    ++sum;
    cout <<"Le nouveau valeur est "<<sum <<endl;
    int a1=3;
    int b1=2;
    b1=a1++;
    cout<<++b1;
    return 0;
}
