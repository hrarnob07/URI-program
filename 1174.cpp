#include <bits/stdc++.h>

int main()
{
float x[100];
int i,j,n,k=1;
for(i=0;i<100;i++)
  {scanf("%f", &x[i]);
  }



for(j=0;j<100;j++)
{
    if(x[j]<=10)
     {printf("A[%d] = %.1f\n",j, x[j]);
     }
}

return 0;
}

