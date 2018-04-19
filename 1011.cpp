
#include<stdio.h>

int main()
{

   double a;
 while((scanf("%lf",&a))==1)
 {
    double sum= (4.0/3)*3.14159*a*a*a;

   printf("VOLUME = %.3lf\n",sum);
 }


 return 0;
}


