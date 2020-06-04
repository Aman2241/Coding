/*
Given a natural number n, the task is to find sum of divisors of all the divisors of n.

for ex:
Input : n = 54
Output : 232
Divisors of 54 = 1, 2, 3, 6, 9, 18, 27, 54.
Sum of divisors of 1, 2, 3, 6, 9, 18, 27, 54 
are 1, 3, 4, 12, 13, 39, 40, 120 respectively.
Sum of divisors of all the divisors of 54 = 
1 + 3 + 4 + 12 + 13 + 39 + 40 + 120 = 232.





*/
#include<bits/stdc++.h>
using namespace std;
int sumofdivisor(int x)
{
    int sum=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }
return sum;    
}


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
	        sum+=sumofdivisor(i);
	    }
	}
	
	cout<<sum<<endl;
}
	return 0;
}