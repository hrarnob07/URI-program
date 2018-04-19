#include<stdio.h>
int main()
{

int n,i,j,count=0;


 while((scanf("%d",&n))==1)
 {

    for(i=0;i<n;i++)
    {
      for(j=1;j<=3;j++)
      {count++;
          printf("%d ",count);
      }
      printf("PUM\n");
      count=count+1;
//
    }


 }
return 0;
}



