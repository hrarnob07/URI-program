#include<stdio.h>
int main()
{

int n,i,j,a,b,x,y;

int  sum=0;
 while((scanf("%d%d",&a,&b))==2)
 {
     if(a>b)
     {
         x=b;
         y=a;
     }
     else
        {
            y=b;
            x=a;
        }

        for(i=x;i<=y;i++)
        {
            if(i%13!=0)
            {
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
        sum=0;



 }
return 0;
}





