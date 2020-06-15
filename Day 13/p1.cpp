//Polymorphism

#include<bits/stdc++.h>
using namespace std;
 
class Car{

public:
virtual void show(){cout<<"I am Car"<<endl;}
};

class Swift:public Car
{

public:
void show(){cout<<"I am Swift"<<endl;}
};
class Innova:public Car
{

public:
void show(){cout<<"I am Innova"<<endl;}
}; 

int main()
{
 

Car *p1=new Innova();
p1->show();
 
p1=new Swift();
p1->show();
return 0;
   
}