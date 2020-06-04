#include<bits/stdc++.h>
using namespace std;
 
 int minMoves(int arr[], int n) 
{ 
    int expectedItem = n; 
  
 
    for (int i=n-1; i >= 0; i--) 
    { 
      
        if (arr[i] == expectedItem) 
            expectedItem--; 
    } 
  
    return expectedItem; 
} 
 
int main()
{
 
 int t;
 cin>>t;
 while(t--)
 {

int n;
cin>>n;
int a[n];

for(int i=0;i<n;i++)
{
    cin>>a[i];
}


if(n==2)
{
    cout<<a[1]<<endl;
}

long long int res=minMoves(a,n);

if(res==0)
    cout<<-1<<endl;
else
{
    cout<<res<<endl;
}





}
 
 
 
return 0;
   
}