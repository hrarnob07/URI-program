/*#include<iostream>

using namespace std;
int main() {
    int A, B, C, D, E, F;
    cin >> B >> C;
    A = 1;
    F=0;

    while(C <= 0)
        cin >> C;


       while(A <= C) {
                F = F + B;
                B = F;

B--;
A++; } F++;
cout << F << endl;




    return 0;
}
*/

#include<stdio.h>
int main()
{
   int a, n, sum, i;

   scanf("%d %d", &a, &n);
   while(n<=0)
          {
              scanf("%d", &n);
          }
         sum = 0;

      for( i = a; i < a + n; i++ )
      {
         sum = sum + i;
      }
      printf("%d\n", sum);

   return 0;
}
