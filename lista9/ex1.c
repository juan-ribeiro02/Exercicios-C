#include <stdio.h>

void exibirMenosMultiplos(int n, int a, int b);

void main()
{
    exibirMenosMultiplos(5, 0, 50);
}

void exibirMenosMultiplos(int n, int a, int b)
{
    int i;

    for (i = a; i <= b; i++)
    {
        if (i % n != 0)
        {
            printf("%d\n", i);
        }
    }
}