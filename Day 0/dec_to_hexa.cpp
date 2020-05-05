#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char hex[100];
	int rem,i=0;
	while(n!=0)
	{
		rem=0;
		rem=n%16;
		if(rem<10)
		{
		hex[i]=rem+48;
		i++;
		}
		else
		{
		hex[i]=rem+55;
		i++;
		}
	n=n/16;	
	}
	
for(int j=i-1;j>=0;j--)
{
cout<<hex[j];
}	
return 0;	
}
