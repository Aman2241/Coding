#include<iostream>
using namespace std;


int main()
{

int count=1;
int n=4;

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<count<<" ";
        count++;
    }
    cout<<"\n";
}

return 0;
}


/*  1 2 3 4
````5 6 7 8
    9 10 11 12
    13 14 15 16
*/