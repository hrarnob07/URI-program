#include <stdio.h>
int main()
{
   float j, i;
    float  soma = 0;
    j = 1;
    for(i = 1; i <= 39; i+=2){
        soma = soma + (i/j);
        j*=2;
    }
    printf("%.2f\n", soma);
    return 0;
}
