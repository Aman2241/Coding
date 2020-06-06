//call by values 
#include<iostream>
using namespace std;

void swap(int a,int b)

{
                      //all the action are performed here only 
   a=a+b;
   b=a-b;
   a=a-b;
}

int main()
{
    int x=30,y=90;
    cout<<x<<" "<<y<<endl;   
    swap(x,y);  // it will pass value of x and y to swap function
    cout<<x<<" "<<y<<endl;  //same as previous value
return 0;
}