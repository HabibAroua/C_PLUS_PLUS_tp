#include<iostream>
#include<string>

using namespace std;

class Cat
{
     private:
     int age;
     string name;

     public:
     Cat(string na  , int ag);
     int getAge();
     string getName();
     void Init(string na , int ag);
     void Meow();
     void Intreduce();
};
