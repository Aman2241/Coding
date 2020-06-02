#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 
 
 char str[100]="amanraj";
 char str1[100]="r";


 if(strstr(str,str1)!=NULL)     // it will return the substring if found by seeing str1
    cout<<strstr(str,str1)<<endl;
 else
 {
    cout<<"NOT FOUND"<<endl;
 }
 
 

 if(strchr(str,'m')!=NULL)   //Return the substring starting from given char if found from left hand side
    cout<<strchr(str,'m')<<endl;
else
{
        cout<<"Not found"<<endl;
}



 if(strrchr(str,'a')!=NULL)   //Return the substring starting from given char if found from right hand side
    cout<<strrchr(str,'a')<<endl;
else
{
        cout<<"Not found"<<endl;
}

 
return 0;
   
}