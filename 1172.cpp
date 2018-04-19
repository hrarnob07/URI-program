#include <bits/stdc++.h>

int main()
{
int x[10];
int i,j;
int y=0;

for(i=0; i<10; i++){
scanf("%d", &x[i]);
}


for(j=0;j<10;j++)
{
    if(x[j]<=0 || x[j]==NULL)
    {
        x[j]=1;
    }
}

for(i=0;i<10;i++)

 printf("X[%d] = %d\n",i, x[i]);


return 0;
}
