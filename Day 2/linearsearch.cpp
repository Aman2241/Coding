#include<iostream>
using namespace std;

void Linear_search(int a[],int n,int value)

{

    int pos;
for(int i=0;i<n;i++)
{
    if(a[i]==value)
        pos=i;
}

cout<<pos<<endl;

}


 
int main()
{
 //Enter no of elements



 int n;
 cin>>n;

 //Array for storing array of elements

 int a[n];

 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }

 //value to find in array

 int value;

 cin>>value;

 Linear_search(a,n,value);
 
 
 
 
return 0;
   
}