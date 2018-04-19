#include<stdio.h>
int main()
{

double A,B,n;
int C;
 while((scanf("%lf",&n))==1)
 {

    if(n>=0 && n<=400)
    {
        A=n+n*.15;
        B=A-n;
        C=15;
    }
    else if(n>=400.01 && n<=800)
    {
         A=n+n*.12;
        B=A-n;
        C=12;
    }
    else if(n>=800.01 && n<=1200)
    {
        A=n+n*.10;
        B=A-n;
        C=10;
    }
      else if(n>=1200.01 && n<=2000)
    {
        A=n+n*.07;
        B=A-n;
        C=7;
    }
     else
    {
        A=n+n*.04;
        B=A-n;
        C=4;
    }


      printf("Novo salario: %.2lf\n",A);
      printf("Reajuste ganho: %.2lf\n",B);
      printf("Em percentual: %d %%\n",C);



 }
return 0;
}















