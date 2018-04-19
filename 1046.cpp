#include <stdio.h>
#include <math.h>
#include<stdlib.h>

main()
{
      int i,j,x;
    while(  (scanf("%d%d",&i,&j))==2)
    {


      x = 24-i+j;
      if(x > 24)
      x = abs(24 - (24-i+j));
      printf("O JOGO DUROU %d HORA(S)\n",x);
    }

      return 0;
}
