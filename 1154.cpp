#include<stdio.h>
int main()
{

int n,i,j,a,b,x,y,count=0,l=0,sum=0,k=0;
float avg;
  level:
 scanf("%d",&n);


  if(n>0)
  {  k++;
       sum=sum+n;
       goto level;
  }

  else
  {
      avg =(float) sum/(float)k;
     printf("%.2f\n",avg);
  }





return 0;
}





