#include<stdio.h>
int main()
{
       double sum=0.0,a[13][13],mid,cont=0;
       char ch[2];
      int n,t,i,j;
       scanf("%d",&n);
       scanf("%s",&ch);

        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
          {

           scanf("%lf",&a[i][j]);

                if(i<j)
            {
                sum=sum+a[i][j];
                cont++;
            }
          }

        }

       mid=sum/cont;
       if(ch[0]=='S')
        {printf("%.1lf\n",sum);}

        if(ch[0]=='M')
         {printf("%.1lf\n",mid);
         }



    return 0;
}


