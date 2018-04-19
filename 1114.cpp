#include<stdio.h>
#include<stdlib.h>
int main()
{

int n,x,y,i,j,k,sum=0,temp,a,b;

level:
    scanf("%d",&n);
    if(n!=2002)
    {
        printf("Senha Invalida\n");
        goto level;
    }
    else
    {
        printf("Acesso Permitido\n");
        return 0;

    }



return 0;
}
