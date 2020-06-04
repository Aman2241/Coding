/*
Given an array of digits (values are from 0 to 9), find the minimum possible sum of two numbers formed from digits of the array. 
All digits of given array must be used to form the two numbers.
ex:
6 8 4 5 2 3
out->604(246+358)

*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
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
	
	sort(a,a+n);
	
	int n1=0,n2=0;
	
	for(int i=0;i<n;i++)
	{
	    if(i%2==0)
	    {
	        n1=n1*10+a[i];
	    }
	    else
	    {
	        n2=n2*10+a[i];
	    }
	}
	
	
	cout<<n1+n2<<endl;
	
	}

	return 0;
}