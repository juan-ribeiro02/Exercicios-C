#include <stdio.h>

void numerosPrimos(int n);

void main()
{
    numerosPrimos(20);
}

void numerosPrimos(int n)
{
    int i, j, cont;

    for (i = 2; i <= n; i++)
    {
        cont = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cont++;
            }
        }

        if (cont == 2)
        {
            printf("%d\n", i);
        }
    }
}