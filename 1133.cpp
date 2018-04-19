#include<stdio.h>
int main()
{

int n,i,a,b,x,y;


 while((scanf("%d%d",&a,&b))==2)
 {

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


    for(i=x+1; i<y; i++)
    {
       if(i%5==2 || i%5==3)
       {
            printf("%d\n",i);
       }
    }


 }
return 0;
}



