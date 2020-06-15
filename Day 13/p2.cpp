//find missing number
//n=5
//1 2 4 3
//ans=5

#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 
 long long int n;
 cin>>n;
    int k=n-1;
 long long int a[k];

    long long int sum=0;
 
for(int i=0;i<k;i++)
{
    cin>>a[i];
}
 int x1=a[0];

 int x2=1;

 for(int i=1;i<k;i++)
 {
     x1=x1^a[i];
 }
 
for(int i=2;i<=k+1;i++)
{
    x2=x2^i;
}


int ans=x1^x2;

cout<<ans<<endl;
return 0;
   
}