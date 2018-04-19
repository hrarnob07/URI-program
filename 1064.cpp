#include<stdio.h>
int main()
{

int a[8];
int i,n=0;
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
     if(a[i]%2==0)
    {
        n++;
    }
}

printf("%d valores pares\n",n);



return 0;
}















