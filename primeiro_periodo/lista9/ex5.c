#include <stdio.h>

void tabuadaDePotencias(int n);

void main()
{
    tabuadaDePotencias(2);
}

void tabuadaDePotencias(int n)
{
    int i, j = 1;

    for (i = 0; i <= 9; i++)
    {
        printf("%d^%d = %d\n", n, i, j);

        j*=n;
    }
}