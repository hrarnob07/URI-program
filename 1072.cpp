#include<stdio.h>
int main()
{

int A=0,B=0,C,a[100000],n,i;


 while((scanf("%d",&n))==1)
 {

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=10 && a[i]<=20)
        {
            A++;
        }
        else
        {
            B++;
        }
    }
    printf("%d in\n",A);
    printf("%d out\n",B);

 }
return 0;
}

