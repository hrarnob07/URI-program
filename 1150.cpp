#include<stdio.h>
int main()
{
   int a, n,x,count, sum, i;

   scanf("%d%d", &a, &n);
   while(n<=a)
          {
              scanf("%d", &n);
          }
         sum = 0;
     count=0;
     x=a;
    for(i=0;i<n;x++)
    {
          i=i+x;
          //sum=i;

          count++;
    }


      printf("%d\n", count);

   return 0;
}
