/*

​Given a number x, your task is to find if this number is Deficient number or not. A number x is said to be Deficient Number if sum of all the divisors of the number denoted by divisorsSum(x) is less than twice the value of the number x. And the difference between these two values is called the deficiency.

Mathematically, if below condition holds the number is said to be Deficient:
divisorsSum(x) < 2*x
deficiency = (2*x) - divisorsSum(x)




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
	
	int sum=0;
	for(int i=1;i<=n;i++)
	{
	    if(n%i==0)
	    {
	        sum+=i;
	    }
	}
	
	if(sum<2*n)
	{
	    cout<<1<<endl;
	}
	else
	{
	    cout<<0<<endl;
	}
	
	}

	return 0;
}