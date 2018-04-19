#include <stdio.h>
#include <stdlib.h>

  int main()
   {
      int N[20],X[20],m;
      int i,j, troca;

       for (i=0;i<20;i++){
          scanf("%d", &N[i]);
           }
           m=0;
   for (j=0;j<10;j++)
  {
     troca= N[m];
     N[m]=N[19-m];
     N[19-m]= troca;
     m++;
   }
   for (i=0;i<20;i++){
    printf("N[%d] = %d\n", i, N[i]);
   }

    return 0;
}
