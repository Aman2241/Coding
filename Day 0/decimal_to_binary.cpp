#include<iostream>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int i=0;
		int bin[100];
		
		while(n!=0)
		{
			bin[i]=n%2;
			n=n/2;
			i++;
		}
		
		for(int j=i-1;j>=0;j--)
		{
		cout<<bin[j];
		}
return 0;		
}
