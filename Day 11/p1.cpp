#include<bits/stdc++.h>
using namespace std;
 
class Complex
{
public:
    int real;
    int imag;

    
    Complex operator+(Complex x)
    {
        Complex temp;

        temp.real=real+x.real;
        temp.imag=imag+x.imag;
        return temp;

    }



};

 
int main()
{
 
 Complex c1;
 Complex c2;

 Complex c3;


 c1.real=3; c1.imag=5;
 c2.real=5; c2.imag=3;
 c3=c1+c2;
cout<<c3.real<<"+i"<<c3.imag<<endl;
 
 
return 0;
   
}