
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
 
 Programming p;   //object created in stack
 p.setname("C++");
 p.getname();
 
 
 
 
return 0;
   
}