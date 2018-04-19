
#include<stdio.h>
#include<string.h>
int main()
{

int a,b,c,d,e,f,g,s,n;


 while((scanf("%d",&n))==1)
 {
  a=n/(60*60);
  b=(n-(a*60*60))/60;
  c=(n-(a*60*60)-(b*60));


   printf("%d:%d:%d\n",a,b,c);


 }
return 0;
}



