// Object creation in heap

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
 
 Programming *ptr=new Programming();   //object created in heap

 ptr->setname("Java");
 ptr->getname();

 
 
return 0;
   
}