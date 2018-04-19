#include<stdio.h>
int main()
{

int n,i,j;

double a[100],sum=0;
 while((scanf("%d",&n))==1)
 {

    for(j=1;j<=n;j++)
    {
        for(i=0;i<3;i++)
       {scanf("%lf",&a[i]);
         if(i==0)
        sum=sum+a[i]*2;
        if(i==1)
            sum=sum+a[i]*3;

        if(i==2)
            sum=sum+a[i]*5;

       }
        printf("%.1lf\n",(sum)/10);
        sum=0;
    }


 }
return 0;
}




