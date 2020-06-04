//given a string.
//output->first char+length of string-2+LAST CHARACTER ->if(length>10)
/*if(length<10)
print same string
*/

#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 
 int t;
 cin>>t;
 while(t--)
 {

string s;

cin>>s;


long long int n;

n=s.length();
string s1,s2;
int len=n-2;
//int len=n-2;
s1=s[0];
s2=s[n-1];
if(n<=10)
{
    cout<<s<<endl;
}
else
{
    cout<<s1+to_string(len)+s2<<endl;
}







 }
 
 
 
return 0;
   
}