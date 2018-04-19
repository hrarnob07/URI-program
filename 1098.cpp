#include<stdio.h>
int main()
{

float i,j;

for(i=0;i<.20;i=i+.2)
{
    for(j=1;j<=3;j=j+1)
    {
        printf("I=%.0f J=%.0f\n",i,(j+i));


    }
}
for(i=.2;i<1;i=i+.2)
{
    for(j=1;j<=3;j=j+1)
    {
        printf("I=%.1f J=%.1f\n",i,(j+i));


    }
}
 for(i=1;i<1.2;i+=0.2){
        for(j=1;j<4;j++){
            printf("I=%.0f J=%.0f\n",i,j+i);
        }
    }//Imprime do I=1

    for(i=1.2;i<2;i+=0.2){
        for(j=1;j<4;j++){
            printf("I=%.1f J=%.1f\n",i,j+i);
        }
    }

for(i=2;i<2.2;i+=0.2){
    for(j=1;j<4;j++){
        printf("I=%.0f J=%.0f\n",i,j+i);
    }
}

return 0;
}




