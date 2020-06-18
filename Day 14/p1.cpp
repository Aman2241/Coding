#include<bits/stdc++.h>
using namespace std;
 
void leftrotate(int a[],int n)
{

int temp=a[0];

for(int i=0;i<n-1;i++)
{
a[i]=a[i+1];
}

a[n-1]=temp;

} 






void leftrotone(int a[],int n,int d)     //d->no of element to rotate    n=4 0 1 2 
{

for(int i=0;i<d;i++)
{
    leftrotate(a,n);
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
 int d;
 cin>>d;
 leftrotone(a,n,d);
 
 for(int i=0;i<n;i++)
 {
     cout<<a[i]<<" ";
 }

 cout<<endl;
return 0;
   
}