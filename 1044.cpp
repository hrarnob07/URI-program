#include<stdio.h>
int main()
{

int A,B,C;


 while((scanf("%d%d",&A,&B))==2)
 {

    if (B%A==0 || A%B==0) {
        printf("Sao Multiplos\n");
            }
    else printf("Nao sao Multiplos\n");

 }
return 0;
}














