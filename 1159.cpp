#include<bits/stdc++.h>
int main()
{
    int a,b,i,j,n,k,count,sum;
    while((scanf("%d",&n))==1)
    {
        if(n==0)
            break;
        else
        {
            count =1;
            sum=0;
            for(i=n,count=1;count<=5;i++)
            {
               if(i%2==0)
               {
                   sum=sum+i;
                   count++;
               }
            }
            printf("%d\n",sum);

        }
    }


    return 0;
}
