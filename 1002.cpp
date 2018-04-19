#include<stdio.h>
#include<math.h>

int main()
{
double PI=3.14159;
    double a, b;
 while((scanf("%lf", &a))==1)
 {
  double sum= pow(a,2);

   printf("A=%.4lf\n",(PI*sum));
 }


 return 0;
}
