#include<stdio.h>
int main()
{

int n,i,j,a,b,x,y,count=0,l=0,sum=0,k=0;
scanf("%d",&n);
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


    for(j=1;j<=y;j++)
    {
        if(x%2!=0)
        {
            sum=sum+x;

        }
        x++;
    }
    x=0;
    sum=0;

}
printf("%.2lf\n",sum);


return 0;
}







