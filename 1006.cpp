
#include<stdio.h>

int main()
{

   double a, b,c;
 while((scanf("%lf%lf%lf",&a, &b,&c))==3)
 {
    double sum= (a*2+b*3+c*5)/10;

   printf("MEDIA = %.1lf\n",sum);
 }


 return 0;
}

