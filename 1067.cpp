#include<stdio.h>
int main()
{

int a,b,x,y;
int i,n,s=0;
 while(scanf("%d%d",&a,&b)==2){
    if(a>b)
       {
      x=b;
      y=a;
      }
    else
        {
        x=a;
        y=b;
       }




      for(i=x;i<=y;i++)
         {

       if(i%2!=0)
        {
        s+=i;
        }

         }
      printf("%d\n",s);
 }

return 0;
}
















