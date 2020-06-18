#include<bits/stdc++.h>
using namespace std;
 
void cyclerotate(int a[],int n)
{

int temp=a[n-1];
int x[n];
for(int i=1;i<=n-1;i++)
{
x[i]=a[i-1];
}

x[0]=temp;


for(int i=0;i<n;i++)
 {
     cout<<x[i]<<" ";
 }
} 





 
int main()
{
 
 int n;
 cin>>n;
int a[n];
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }

 cyclerotate(a,n);
 
 

 cout<<endl;
return 0;
   
}