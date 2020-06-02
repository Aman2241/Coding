#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 
 string email="aman@gmail.com";

 int r1=(int)email.find('@');

 string uname=email.substr(0,r1);

 cout<<uname<<endl;
 


 
return 0;
   
}