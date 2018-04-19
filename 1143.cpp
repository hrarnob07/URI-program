#include<stdio.h>
#include<math.h>
int main()
{

double n,i,j,k;


 while((scanf("%lf",&n))==1)
 {

    for(i=1;i<=n;i++)
    {
      for(j=1;j<=3;j++)
      {
          k=pow(i,j);
          if(j==3)
          printf("%.0lf",k);
          else
           printf("%.0lf ",k);

      }
      printf("\n");


    }


 }
return 0;
}




