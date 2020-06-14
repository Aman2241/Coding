


#include<bits/stdc++.h>
using namespace std;

class Car
{
public:

void model()
{
    cout<<"BMW"<<endl;
}


}; 
 
class Audi:public Car
{
public:

void model()                             //inheriting then defining same method of parent class again called overriding
{
 cout<<"AUDI"<<endl;

}


};
 
int main()
{
 
Car c;
Audi a;

c.model();
a.model();

 
 
 
 
return 0;
   
}