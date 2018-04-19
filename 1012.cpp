
#include<stdio.h>

int main()
{

   double a, b,c;
 while((scanf("%lf%lf%lf",&a, &b,&c))==3)
 {  double tan =.5*a*c;
    double sum =a*b;
    double rad =3.14159*c*c;
    double tra =.5*(a+b)*c;
    double sqr =b*b;

   //printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\n",tan,rad,tra);

printf("TRIANGULO: %.3lf\n",tan);
printf("CIRCULO: %.3lf\n",rad);
printf("TRAPEZIO: %.3lf\n",tra);
printf("QUADRADO: %.3lf\n",sqr);
printf("RETANGULO: %.3lf\n",sum);

 }


 return 0;
}


