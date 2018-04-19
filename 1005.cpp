#include<stdio.h>

int main()
{

   double a, b;
 while((scanf("%lf%lf",&a, &b))==2)
 {
    double sum= (a*3.5+b*7.5)/11;

   printf("MEDIA = %.5lf\n",sum);
 }


 return 0;
}




