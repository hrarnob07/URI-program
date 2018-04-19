
#include<stdio.h>
#include<string.h>
int main()
{

int a,b,c,d,e,f,g,s;
double k,l,m,n,o,p,q,r,s;
int n;


 while((scanf("%lf",&k))==1)
 { n=(int)k;
  a=(int)(n/100);
  b=(int)((n-(a*100))/50);
  c=(int)((n-(a*100)-(b*50))/20);
  d=(int)((n-(a*100)-(b*50)-(c*20))/10);
  e=(int)((n-(a*100)-(b*50)-(c*20)-(d*10))/5);
  f=(int)((n-(a*100)-(b*50)-(c*20)-(d*10)-(e*5))/2);
  g=(int)((n-(a*100)-(b*(/.5
  m=
printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n",a);
   printf("%d nota(s) de R$ 50.00\n",b);
   printf("%d nota(s) de R$ 20.00\n",c);
   printf("%d nota(s) de R$ 10.00\n",d);
   printf("%d nota(s) de R$ 5.00\n",e);
   printf("%d nota(s) de R$ 2.00\n",f);


   printf("NOTAS:\n");

   printf("%d nota(s) de R$ 1.00\n",g);

 }
return 0;
}

