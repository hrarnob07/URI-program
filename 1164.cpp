#include<stdio.h>
int main(){
  int n,i=1,sum=0,k,j;
scanf("%d",&k);
  for(j=1;j<=k;j++)
 {
     sum=0;
     i=1;
   scanf("%d",&n);

    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
  }
  if(sum==n)
      printf("%d eh perfeito\n",i);
  else
      printf("%d nao eh perfeito\n",i);





}
 return 0;
}
