#include<stdio.h>
int main()
{
   int a, n,x,count, sum, i,t;

   scanf("%d", &t);

   for(i=1;i<=t;i++)
   {
       scanf("%d",&n);
        if(n%2==0)
            printf("0\n");
        else
        {
            printf("1\n");
        }
   }




   return 0;
}

