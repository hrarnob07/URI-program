#include<stdio.h>
int main()
{

int n,i,j,sum=1,c,a=0,g=0,d=0;


      level:
          scanf("%d",&n);


          if(n==4)
          {
              printf("MUITO OBRIGADO\n");
              printf("Alcool: %d\n",a);
              printf("Gasolina: %d\n",g);
              printf("Diesel: %d\n",d);
              return 0;


          }
         else
          {
              if(n==1)
              {
                  a++;
              }
             else if(n==2)
              {
                  g++;
              }
              else if(n==3)
                {
                    d++;
                }
              goto level;
          }




return 0;
}




