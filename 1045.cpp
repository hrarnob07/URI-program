#include<stdio.h>
int main()
{

double x,y,z,a[5],A,B,C;

int i,j,temp;
 while((scanf("%lf%lf%lf",&x,&y,&z))==3)
 {
     if(x <0 || y<0 || z<0)
     {
         return 0;
     }
    a[0]=x;
    a[1]=y;
    a[2]=z;

     for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
     {
         int temp;
         if(a[j]<a[i])
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
     }

     A=a[2];
     B=a[1];
     C=a[0];



      if(A >= (B + C))
        {
            printf("NAO FORMA TRIANGULO\n");
            if(((A==B)&&(A!=C) )|| ((A==C)&&(A!=B))||((B==C)&&(B!=A)))
               {
               printf("TRIANGULO ISOSCELES\n");
               }
        }
     else   if((A*A )== (B*B + C*C))
        {
            printf("TRIANGULO RETANGULO\n");
            if(((A==B)&&(A!=C) )|| ((A==C)&&(A!=B))||((B==C)&&(B!=A)))
             {
               printf("TRIANGULO ISOSCELES\n");
             }

        }

       else  if((A*A )> (B*B + C*C))
        {
            printf("TRIANGULO OBTUSANGULO\n");
            if(((A==B)&&(A!=C) )|| ((A==C)&&(A!=B))||((B==C)&&(B!=A)))
            {
             printf("TRIANGULO ISOSCELES\n");
            }
        }
   else if((A*A) < (B*B + C*C))
        {
            printf("TRIANGULO ACUTANGULO\n");
             if(A==B&&A==C)
              {
              printf("TRIANGULO EQUILATERO\n");
              }
               if(((A==B)&&(A!=C) )|| ((A==C)&&(A!=B))||((B==C)&&(B!=A)))
            {
             printf("TRIANGULO ISOSCELES\n");
            }
        }




 }

return 0;
}





