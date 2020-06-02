#include<bits/stdc++.h>
using namespace std;
  
 // check whether string is pallindrome or not
 
int main()
{
 
 string s1="abba";

 string :: reverse_iterator it=s1.rbegin();

if(equal(s1.begin(),s1.end(),it))
    cout<<"Pallindrome"<<endl;
else
{
    cout<<"No"<<endl;
}

 
return 0;
   
}