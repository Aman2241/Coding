#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[100];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }

	    sort(a,a+n);
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	}
	return 0;
}
