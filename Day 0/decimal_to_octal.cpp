#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int oct[100];
	int i=0;
	while(n!=0)
	{
	oct[i]=n%8;
	n=n/8;
	i++;
	}
	
	for(int j=i-1;j>=0;j--)
	{
		cout<<oct[j];
	}
return 0;	
	
}
