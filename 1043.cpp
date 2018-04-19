#include<stdio.h>
int main()
{

double A,B,C;


 while((scanf("%lf%lf%lf",&A,&B,&C))==3)
 {
   if (A<(B+C) && B<(A+C) && C<(A+B))
   {
       printf("Perimetro = %.1lf\n",(A+B+C));
   }
   else
   {
      double area= ((A+B)*C)/2;
      printf("Area = %.1lf\n",area);
   }

 }
return 0;
}




