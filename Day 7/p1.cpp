
//maximum using template

//not using namespace because using same function for different data types is ambigious



#include<bits/stdc++.h>
//using namespace std;
 
template<class t>

t max(t x,t y)
{
    if(x>y)
        return x;
    else
    {
        return y;
    }
    
}
 
int main()
{
 
std::cout<<max(5,4)<<std::endl;
std::cout<<max(4.5,6.7)<<std::endl;
 
 
 
 
return 0;
   
}