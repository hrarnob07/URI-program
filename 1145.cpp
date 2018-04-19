#include<stdio.h>
int main()
{

int n,i,j,a,b,x,y,count=0,l=0;


 while((scanf("%d%d",&a,&b))==2)
 {

    for(i=1; i<=b; i++)
    {

            l++;
            count++;

        if(l==a)
        {printf("%d\n",count);
         l=0;
        }

        else
        {
            printf("%d ",count);
        }

    }


 }
return 0;
}




