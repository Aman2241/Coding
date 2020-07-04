/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int prime(int n)
{

  int i=1,flag,count=0;

  while(i!=0)
  {
      flag=0;
      for(int j=2;j<=i;j++)
      {
          if(i%j==0)
          {
              flag++;
          }


      }
      if(flag==0 && count<n)
      {
          count++;
      }

      if(count==n)
      {
          break;
      }

      i++;
  }

  cout<<i;

}



int main()
{

   cout<<prime(10);

    return 0;
}
