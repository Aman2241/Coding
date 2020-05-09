#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int x,y,z;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;

        sum+=x+y+z;
    }

    if(sum==0)
        cout<<"YES"<<endl;
    else
    {
            cout<<"NO"<<endl;
    }
    
return 0;

}
