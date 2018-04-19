#include<stdio.h>
int main()
{

int n,i,a[1010],j;


    scanf("%d",&n);

    if(n>=2 && n<=50)
    {
        for(i=0;i<=999;)
        {
            for(j=0;j<n;j++)
            {
                a[i]=j;
                i++;
            }
        }
       for(i=0;i<=999;i++)
       {
           printf("N[%d] = %d\n",i,a[i]);
       }

    }



return 0;
}
/*
#include <iostream>
using namespace std;

int main()
{
    int x[1010],n,i=0;
    cin>>n;
    while(i<1000){
        for(int j=0;j<n;j++){
            x[i]=j;
            i++;
        }
    }
    for(int k=0;k<1000;k++){
        cout<<"N["<<k<<"] = "<<x[k]<<endl;
    }
    return 0;
}
*/
