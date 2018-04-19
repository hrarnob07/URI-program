#include <stdio.h>

main ()
{
    float n, i=0, C, R, S, c, r, s, q, t;
    char x;
    scanf ("%f", &n);
    while (i<n)
    {
        scanf ("%f %c", &q, &x);
        if (x=='C')
        {
            C=C+q;
        }
        if (x=='R')
        {
            R=R+q;
        }
        if (x=='S')
        {
            S=S+q;
        }
        i++;
    }
    t=C+R+S;
    c=(C/t)*100;
    r=(R/t)*100;
    s=(S/t)*100;
    printf ("Total: %.0f cobaias\nTotal de coelhos: %.0f\nTotal de ratos: %.0f\nTotal de sapos: %.0f\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", t, C, R, S, c, r, s);

return 0;
}
