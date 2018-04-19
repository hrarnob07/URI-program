#include <stdlib.h>
#include <stdio.h>

int main ()
  {
    int x, y,i,sum=0;
   while( scanf("%d",&x)==1)
    {
        if(x==0)
        {
            break;
        }
        for(i=1;i<=x;i++)
        {
            if(i==x)
            {
                printf("%d\n",i);
            }
            else
            {
               printf("%d ",i);
            }
        }
    }
    return 0;
  }
