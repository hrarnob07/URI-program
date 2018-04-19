#include<stdio.h>
#include<stdlib.h>
int main()
{

int n,x,y,i,j,k,sum=0,temp,a,b;


    scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         if(n%i==0)
         {
             printf("%d\n",i);
         }
     }



return 0;
}

