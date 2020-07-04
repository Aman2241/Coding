#include <iostream>

using namespace std;

int BinaryS(int A[100],int l,int h,int key)
{
int mid;
while(l<=h)
{

mid=(l+h)/2;

if(A[mid]==key)
{
return mid;
}

else if(key<A[mid])
{
h=mid-1;
//cout<<"Item Found at location :"<<mid+1;
}

else
{
l=mid+1;
//cout<<"Item Found at location :"<<mid+1;
}
}
return -1;
}


int main()
{
int N,A[100],key,result;
cin>>N;
//Enter the Array element in sorted order for performing binary search
for(int i=1;i<=N;i++)
{
cin>>A[i];
}
cin>>key;
result=BinaryS(A,1,N,key);
(result==-1) ? cout<<"Item not found":cout<<"Item Found at loc :"<<result;
return 0;
}
