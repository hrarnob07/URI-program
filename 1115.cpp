
#include<stdio.h>
int main()
{

int n,x,y,i,j,k,sum=0,temp,a,b;
while((scanf("%d%d",&a,&b))==2)
{

     if(a==0 || b==0)
     {
         return 0;
     }
     else if(a>0 && b>0)
     {
         printf("primeiro\n");
     }
      else if(a>0 && b<0)
     {
         printf("quarto\n");
     }
      else if(a<0 && b<0)
     {
         printf("terceiro\n");
     }
      else if(a<0 && b>0)
     {
         printf("segundo\n");
     }

}


return 0;
}
