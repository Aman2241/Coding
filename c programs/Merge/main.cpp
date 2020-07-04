#include<iostream>
using namespace std;

int fib(int n)
{
  if(n<=1)
    return 1;
  else
    return (fib(n-1)+fib(n-2));
}



int main()
{
    int n;
    n=10;

    cout<<fib(n)<<" ";
return 0;

}
