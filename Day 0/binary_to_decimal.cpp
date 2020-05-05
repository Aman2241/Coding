#include<bits/stdc++.h>
using namespace std;
int main()
{
	int bin_num;
	cin>>bin_num;
	int last_digit;
	int sum=0,i=0;
	while(bin_num!=0)
	{
		
		last_digit=bin_num%10;
		sum=sum+last_digit* pow(2,i);
		bin_num=bin_num/10;
		i++;
	
	}
	
	cout<<sum;
return 0;
}
