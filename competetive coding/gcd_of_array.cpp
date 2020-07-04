/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}


int compute(int a[],int n)
{
    
    int res=a[0];
    
    
    for(int i=1;i<n;i++)
    {
        res=gcd(res,a[i]);
    
    
    if(res==1)
        return 1;
    
    }
    
return res;    
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<compute(a,n);

    return 0;
}
