#include <stdio.h>
int main ()
{

   int N,maior,i,pos;

   maior=0;
   pos=1;
   for(i=1;i<=100;i++)
   {
     scanf("%d",&N);
      if(N>maior)
      {
         maior=N;
         pos=i;
      }

   }
   printf("%d\n",maior);
   printf("%d\n",pos);

   return 0;
}
