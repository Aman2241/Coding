#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 
 
 long long int n;
 cin>>n;
 long long int a[n];
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
long long int sum=0,diff;
 for(int i=0;i<n-1;i++)
 {

diff=a[i]-a[i+1];
if(diff>=1)
{
    sum+=diff;
    a[i+1]=a[i+1]+diff;
}



diff=0;                                 //3 2 5 1 7
 }
 


 cout<<sum<<endl;
 
return 0;
   
}