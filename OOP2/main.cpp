#include <iostream>

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

Cat::Cat(string na , int ag)
{
    Init(na,ag);
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
    Cat cat("Mimi",6);
    cout <<endl;
    cout <<"Introduce yourseflf !!"<<endl;
    cat.Intreduce();
    cat.Meow();
    return 0;
}
