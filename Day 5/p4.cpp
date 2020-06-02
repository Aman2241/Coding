#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 char str1[20]="Aman";
 char str2[10]="Raj";
 

 strcat(str1,str2);    //for concatination of string 2 to string 1

 cout<<str1<<endl;
 

char s1[20]="Hello";
char s2[10]="Aman";
strcat(s2,s1);   ////for concatination of string 1 to string 2

 cout<<s2<<endl;
 

char s6[20]="Good";
char s7[10]="";

strcpy(s7,s6);    // for copy value of 1 string to another

cout<<s7<<endl;






return 0;
   
}