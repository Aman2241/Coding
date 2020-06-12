//Accessing class using pointer

#include<bits/stdc++.h>
using namespace std;
 
 
class Programming
{
private:
    string pname;
public:
    void setname(string cname)
    {
        pname=cname;
    }
    void getname()
    {
        cout<<pname<<endl;
    }


}; 
 
int main()
{
 
 Programming p;
 p.setname("C++");
 p.getname();
 
 Programming *ptr;
 ptr=&p;

 ptr->setname("Python");
 ptr->getname();

 
 
 
return 0;
   
}