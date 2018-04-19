
#include<bits/stdc++.h>
int main()
{
    int n, i, flag = 0,t,j,k;

  while((scanf("%d",&t))==1)
    {

        if(t<=1||t>=101)
        {
            return 0;
        }

        else
            {

            for(i=1;i<=t;i++)
            {
                scanf("%d",&n);

                if(n<2)
                    flag=0;
                else
                    flag=1;

                k=sqrt(n);

                for(j=2;j<=k;j++)
                {
                    if(n%j==0)
                    {   flag=0;
                        break;

                    }
                }


            if (flag==1)
             printf("%d eh primo\n",n);
              else
             printf("%d nao eh primo\n",n);





            }




        }


    }




    return 0;
}



