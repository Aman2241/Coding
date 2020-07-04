#include<iostream>
using namespace std;

void set(int A[],int i,int j,int x)
{
if(i==j)
{
A[i-1]=x;
}
}



int get(int A[],int i,int j)
{
if(i==j)
    return A[i-1];
else
    return 0;
}


void display(int A[])
{
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
if(i==j)
{
cout<<A[i]<<" ";

}
else
{
cout<<0<<" ";
}

}
cout<<"\n";
}
}



int main()
{
int i,j,x;


int A[100];
set(A,1,1,5);
set(A,2,2,8);
set(A,3,3,9);
set(A,4,4,10);
cout<<get(A,2,2);
//display(A);

}
