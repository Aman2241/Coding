#include<bits/stdc++.h>
#include<cstring>
using namespace std;
 
 
 
int main()
{
 
 char s[100];

 //strlen()-> function for finding the length of the string

 cin.getline(s,100);

//cin.ignore();
 cout<<s<<endl;


 cout<<strlen(s)<<endl;
 

 string a;

 getline(cin,a);

 cout<<a.length()<<endl;
 
return 0;
   
}