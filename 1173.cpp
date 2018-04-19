/*#include <bits/stdc++.h>

int main()
{
int x[10];
int i,j,n,k=1;
int y=0;

scanf("%d", &n);

x[0]=n;

for(j=0;j<10;j++)
{
  x[k++]=2*x[j];

}

for(i=0;i<10;i++)

 printf("N[%d] = %d\n",i, x[i]);


return 0;
}
*/


#include<stdio.h>
    int main(){
    int n,k;
    long int aray[20];

    printf("Enter the number range:\n");
    scanf("%d",&n);
    aray[0]=-1;
    aray[1]=1;
    printf("\n FIBONACCI SERIES: \n");
    for(k=2;k<=n+1;k++){
    aray[k]=aray[k-1]+aray[k-2];
    printf(" %ld",aray[k]);
    }
  return 0;
  }



