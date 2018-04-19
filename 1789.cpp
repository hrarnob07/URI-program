#include<stdio.h>
int main()
    {
        int a,n,i,sum=0,max;
        while((scanf("%d",&n))!=EOF)
        {   max=0;
            for(i=1;i<=n;i++)
            {
                scanf("%d",&a);
                if(max<a)
                {
                    max=a;
                }
            }


            if(max<10)
            {
                printf("1\n");
            }
            else if(max>10&& max<20)
            {
                printf("2\n");
            }
            else
                printf("3\n");

        }
    }
