#include <iostream>
#include "Cat.h"

using namespace std;



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
