#include<iostream>
using namespace std;

struct node
{
int data;
struct node *next;
}*first;

int create(int a[],int n)
{

struct node *p,*last;

first=(struct node *)malloc (sizeof(struct node));
first->data=a[0];
first->next=NULL;
last=first;

for(int i=1;i<n;i++)
{
p=(struct node *)malloc (sizeof(struct node));
p->data=a[i];
p->next=NULL;
last=p;
}
}

void display(struct node *q)
{
while( q!=NULL)
{
printf("%d",q->data);
q=q->next;
}
}

















int main()
{
int a[]={3,2,6,9,8,7};
create(a,6);
display(first);
return 0;
}
