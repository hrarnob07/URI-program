#include<stdio.h>
int main()
  {
      int i,j,n,p=0,min;
        scanf("%d",&n);


          int a[n];
          for(j=0;j<n;j++)
          {
              scanf("%d",&a[j]);

          }

           min =a[0];

          for(i=1;i<n;i++)
          {
              if(min>a[i])
              {
                  min=a[i];
                  p=i;

              }
          }

           printf("Menor valor: %d\nPosicao: %d\n", min, p);


      return 0;

  }
