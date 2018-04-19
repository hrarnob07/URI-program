#include <stdlib.h>
#include <stdio.h>

int main ()
  {
    int x, y,i,sum=0;
   while( scanf("%d%d", &x, &y)==2)
    {

         if(x>y)
          {
           for(i=y+1;i<x;i++)
           {
             if(i%2!=0)
             {
                 sum=sum+i;

             }
           }

           printf("%d\n",sum );
              sum=0;
          }
        if(x<y)
          {
          for(i=x+1;i<y;i++)
           {
             if(i%2!=0)
              {

                sum=sum+i;
             }
            }

          printf("%d\n",sum );
             sum=0;
         }
        if(x==y)
         {
             printf("0\n");
                sum=0;
         }

     }
return 0;
}
