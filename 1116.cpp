
#include<stdio.h>
int main()
{

int n,x,y,i,j,k,sum=0,temp,a,b;
float r;
while((scanf("%d",&n))==1)
{
     for(i=1;i<=n;i++)
     {
         scanf("%d%d",&a,&b);
         if(a>0 && b==0)
         {
              printf("divisao impossivel\n");
         }
         else if(a==0 && b==0)
         {
               printf("0.0\n");
         }
         else
            {
                r=(float)a/(float)b;
                 printf("%.1f\n",r);
            }
     }

}


return 0;
}

