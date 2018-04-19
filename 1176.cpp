#include<stdio.h>
#include<conio.h>
int main()
{
   int i,n,a[100],j,t;

   scanf("%d",&t);
for(j=0;j<n;j++)
   { scanf("%d",&n);
       a[0]=0;a[1]=1;

   for(i=2;i<n;i++)
      {a[i]=a[i-1]+a[i-2];}



       printf("Fib(%d) = %d",a[n-1]);

   }
}
