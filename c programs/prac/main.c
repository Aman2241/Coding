#include <stdio.h>
 int main(void) {
 // your code goes here
 int m,n,p,q,i,j,sum=0,k;
 scanf("%d %d %d %d",&m,&n,&p,&q);
 int a[m][n],b[p][q],c[m][q];
 for(i=0;i<m;i++)
 {
     for(j=0;j<n;j++)
     {
         scanf("%d",&a[i][j]);

     }
}
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    {
        scanf("%d",&b[i][j]);
    }
}

for(i=0;i<m;i++)
{
    for(j=0;j<q;j++)
    {
        for(k=0;k<p;k++)
        {
            sum=sum+a[i][k]*b[k][j];
        }

        c[i][j]=sum;
        sum=0;
    }
}

for(i=0;i<m;i++)
{
    for(k=0;k<q;k++)
    {
        printf("%d\t",c[i][k]);
    printf("\n");
    }
}

 return 0;
}
