#include<stdio.h>
int main()
{

int n,i;


 while((scanf("%d",&n))==1)
 {

    for(i=1;i<10000;i++)
    {
       if(i%n==2)
       {
            printf("%d\n",i);
       }
    }


 }
return 0;
}



