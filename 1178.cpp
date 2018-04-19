/*#include <iostream>
#include <iomanip>

using namespace std;



int main(){

   double n,vetor[100];
   cin >> n;

   vetor[0]=n;

   cout << "N[0] = " << setprecision(4) << fixed << n << endl;

   for(int i=1; i<n; i++){
      vetor[i] = vetor[i-1]/2;

      cout << "N[" << i << "] = " << setprecision(4) << fixed << vetor[i] << endl;

   }

   return 0;

}

*/


#include<stdio.h>
int main()
{

double a[120],n;
int i=0,j;

 while((scanf("%lf",&n))==1)
 {    a[0]=n;
     printf("N[%d] = %.4lf\n",i,n);
      for(i=1;i<=99;i++)
       {

          a[i]=a[i-1]/2;
           printf("N[%d] = %.4lf\n",i,a[i]);
         }
    }



return 0;
}
