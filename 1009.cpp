
#include<stdio.h>
#include<string.h>
int main()
{

double a,b,s;
 char n[100];





 while((scanf("%s%lf%lf",n,&a, &b))==3)
 {
  s=a+(b*.15);

   printf("TOTAL = R$ %.2lf\n",s);
 }
return 0;
}

