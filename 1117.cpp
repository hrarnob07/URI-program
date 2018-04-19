#include <stdio.h>
main()
{

      double sum=0, X,Y,l=0,avg;
     level:
      scanf("%lf", &X);
      if(X<0 || X>10)
        {
       printf("nota invalida\n");


       goto level;
      }
      else
        {
            l++;
           sum=sum+X;
            if(l!=2)
                {
                    goto level;
                }
        }


 avg=(sum)/2;



             printf("media = %.2lf\n",avg);

            return 0;
}



