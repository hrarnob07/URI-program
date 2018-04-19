#include<stdio.h>
int main()
{

int n,i,j,sum=0,c;


 while((scanf("%d",&n))==1)
 {
    printf("0 1");
    i=0;
    j=1;
    for(c=0;c<n-2;c++)
    {
      sum=i+j;

          printf(" %d",sum);

         i=j;
         j=sum;

    }
    printf("\n");


 }
return 0;
}





