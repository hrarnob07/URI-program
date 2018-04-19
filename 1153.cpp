#include<stdio.h>
int main()
{

int n,i,j,sum=1,c;


 while((scanf("%d",&n))==1)
 {
   for(i=1;i<=n;i++)
   {
       sum=sum*i;
   }

    printf("%d\n",sum);


 }
return 0;
}




