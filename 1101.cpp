
#include<stdio.h>
int main()
{

int n,x,y,i,j,k,sum=0,temp,a,b;
while((scanf("%d%d",&a,&b))==2)
{



       if(a>b)
       {
          x=b;
          y=a;
       }
       else
        {
          x=a;
          y=b;
        }

        if( x==0 || y==0 || x<0 || y<0)
        {
            return 0;
        }
        else
            {
           for(j=x;j<=y;j++)
            {
              printf("%d ",j);
              sum=sum+j;
              }
            }
         printf("Sum=%d\n",sum);
        sum=0;



}


return 0;
}
