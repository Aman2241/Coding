#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

int main()
{

for(int i=1;i<=5;++i)
{
cout<<i<<" "<<flush;
this_thread::sleep_for(chrono::seconds(1));
}
return 0;
}

