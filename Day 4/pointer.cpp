

//pointer-> contains address of a variable

/* Three steps generally invloved in pointer
1. declaration of pointer
2. initialization of pointer
3. Derefrencing of pointer


Example:

int x=10
int *ptr;

ptr=&x;

cout<<*ptr;  -> Dereferencing

*/

#include<iostream>
using namespace std;

int main()

{
    int x=10;
    int *ptr;
    ptr=&x;
    cout<<x<<endl;   //10
    cout<<(&x)<<endl; //address of x
    cout<<ptr<<endl; //address of x
    cout<<*ptr<<endl;  //value of x
}



