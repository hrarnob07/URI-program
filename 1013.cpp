
#include<stdio.h>
#include <stdlib.h>

int main()
{

   int a, b,c,sum;

 while((scanf("%d%d%d",&a, &b,&c))==3)
 {if(a>b)
     {
         if(a>c)
         {
             sum=a;
         }
         else
            sum=c;
     }
     else
     {
         if(b>c)
         {
             sum=b;
         }
         else
            sum=c;
     }


printf("%d eh o maior\n",sum);


 }


 return 0;
}



