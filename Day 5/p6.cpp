#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 
 string s1;
 s1="Aman";


 if(s1.empty())   //to check whether given string is null or not
    cout<<"Yes"<<endl;
else
{
    cout<<"No"<<endl;
}



cout<<s1.length()<<endl;    //return length of string
cout<<s1.size()<<endl;  ////return length of string
cout<<s1.max_size()<<endl;   //return maximum length
 
 
 string r=s1.substr(1,3);   //copy from pos 1 to 3 in string r

 cout<<r<<endl; 


string c3="Hello";

cout<<c3.append(" World")<<endl;


string x="raj";
string y="aman";

x.swap(y);

cout<<x<<"\n"<<y<<endl;

return 0;
   
}