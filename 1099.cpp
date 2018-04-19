#include<stdio.h>
int main()
{

int n,x,y,i,j,k,sum=0,temp,a,b;
while(scanf("%d",&n)==1)
{
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);

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


        for(j=x+1;j<y;j++)
        {
            if(j%2!=0)
            {
                sum=sum+j;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }


}


return 0;
}
