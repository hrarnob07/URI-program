#include<stdio.h>
int main()
{

double a[8];
int i,n=0;
for(i=0;i<6;i++)
{
    scanf("%lf",&a[i]);
}

for(i=0;i<=5;i++)
{
    if(a[i]>0)
    {
        n++;
    }
}
printf("%d valores positivos\n",n);



return 0;
}















