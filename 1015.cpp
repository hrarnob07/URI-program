
#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{

   double a, b,c,d,sum;

 while((scanf("%lf%lf%lf%lf",&a, &b,&c,&d))==4)
 {
   sum =(c-a)*(c-a)+(d-b)*(d-b);


printf("%.4lf\n",sqrt(sum));


 }


 return 0;
}




