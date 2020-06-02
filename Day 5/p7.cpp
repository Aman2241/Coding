#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 
 
 string s="Welcome to India";
int vowel=0,const1=0,space=0;
 for(int i=0;s[i]!='\0';i++)
 {
     if(s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
     {
         vowel++;
     }
     else if(s[i]==' ')
     {
         space++;
     }
     else
     {
         const1++;
     }
     
 }


 cout<<const1<<" "<<vowel<<" "<<space<<endl;
 
return 0;
   
}