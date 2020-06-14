#include<bits/stdc++.h>
using namespace std;
 
class Base
{

private:
int l;

public:
Base()
{
    cout<<"I am Base"<<endl;
}
Base(int len)
{
    l=len;

    cout<<l<<endl;
}


}; 
 

class Derrived:public Base
{
public:

Derrived()
{
cout<<"I am derrived"<<endl;
}

}; 
int main()
{
 

Base b(56);
Derrived d;
 
 
 
 
return 0;
   
}