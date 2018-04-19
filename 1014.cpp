#include<stdio.h>

int main()
{
    int a;
   double  b;
 while((scanf("%d%lf",&a, &b))==2)
 {
    double sum= a/b;

   printf("%.3lf km/l\n",sum);
 }


 return 0;
}





