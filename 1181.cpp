//#include<bits/stdc++.h>
#include<stdio.h>
int main()
{
       double sum=0.0,a[13][13],mid;
       char ch[2];
      int n,t,i,j;
       scanf("%d",&n);
       scanf("%s",&ch);

        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
          {

           scanf("%lf",&a[i][j]);

                if(i==n)
            {
                sum=sum+a[i][j];
            }
          }

        }

       mid=sum/12.0;
       if(ch[0]=='S')
        {printf("%.1lf\n",sum);}

        if(ch[0]=='M')
         {printf("%.1lf\n",mid);
         }



    return 0;
}









/*
#include <stdio.h>
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,x,y;
    scanf("%d", &C);
    scanf("%s", &T);
    for(x=0;x<=3;x++)
    {
        for(y=0; y<=3; y++)
        {
        scanf("%lf", &M[x][y]);
        if(x==C)
            a+=M[x][y];
        }
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/12.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
*/

