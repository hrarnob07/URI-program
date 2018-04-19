#include<stdio.h>
int main()
{

int x,y,z,a[10],i,j;


 while((scanf("%d%d%d",&x,&y,&z))==3)
 {
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
     for(i=0;i<3;i++)
     {
         printf("%d\n",a[i]);
     }
     printf("\n%d\n%d\n%d\n",x,y,z);
 }
return 0;
}



