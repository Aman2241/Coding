#include<bits/stdc++.h>
using namespace std;
 
class Base{

public:

void fun1()
{
    cout<<"Hello I am Base"<<endl;
}

void fun2()
{

    cout<<"Hello I am base fun"<<endl;
}


};
 

class Derrived:public Base{
public:

void fun3()
{
    cout<<"I am derrived"<<endl;
}

};

int main()
{
 
Base *p;

p=new Derrived();

p->fun1();
p->fun2();
 
 
 
return 0;
   
}