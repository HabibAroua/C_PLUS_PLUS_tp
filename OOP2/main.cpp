#include <iostream>

using namespace std;

class Cat
{
     private:
     int age;
     string name;

     public:
     int getAge();
     string getName();
     void Init(string na , int ag);
     void Meow();
     void Intreduce();
};

int Cat::getAge()
{
    return age;
}

string Cat::getName()
{
    return name;
}

void Cat::Init(string na , int ag)
{
    name=na;
    age=ag;
}

void Cat::Intreduce()
{
     cout <<"I'm "<<name <<" my age is "<<age <<endl;
}

void Cat::Meow()
{
    cout <<"Mewo "<<endl;
}

int main()
{
    Cat cat;
    cat.Init("Mimi",6);
    cout <<endl;
    cout <<"Introduce yourseflf !!"<<endl;
    cat.Intreduce();
    cat.Meow();
    return 0;
}
