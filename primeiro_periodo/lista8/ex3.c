#include <stdio.h>

int sequenciaFibonacci(int n)
{
    int i, j = 0, k = 1, l;

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    for (i = 2; i <= n; i++)
    {
        l = j + k;
        j = k;
        k = l;
    }
    return k;
}

void main()
{
    printf("%d", sequenciaFibonacci(5));
}