#include<stdio.h>

int main()
{

   int a, b,c,d;
   double x,y;
 while((scanf("%d%d%lf%d%d%lf",&a,&b,&x,&c,&d,&y))==6)
 {


   printf("VALOR A PAGAR: R$ %.2lf\n",((x*b)+(y*d)));
 }


 return 0;
}
