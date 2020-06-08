#include<bits/stdc++.h>
using namespace std;
 

int getNthFib(int n) {
  // Write your code here.
	if(n==0)
	{
		return 0;
	}
	if(n==2 || n==3)
	{
		return 1;
	}
	else
	{
		return getNthFib(n-1)+ getNthFib(n-2);
	}
		
  return -1;
}

 
int main()
{
 
 int n;
 cin>>n;

 cout<<getNthFib(n)<<endl;
 
 
 
return 0;
   
}