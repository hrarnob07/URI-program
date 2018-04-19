
#include<stdio.h>
#include<string.h>
int main()
{

int a,b,c,d,e,f,g,s,n;


 while((scanf("%d",&n))==1)
 {
  a=n/(365);
  b=(n-(a*365))/30;
  c=(n-(a*365)-(b*30));


   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,b,c);


 }
return 0;
}




