#include <stdio.h>

int fatorial(int n);
int potencias(int base, int expo);
float soma(int n);

void main()
{
    printf("%.6f", soma(10));
}

int fatorial(int n)
{
    int i, fatorial = 1;

    for(i=n; i>=1; i--)
    {
        fatorial *= i;
    }

    return fatorial;
}

int potencias(int base, int expo)
{
    int i, resul = 1;

    for(i = 1; i <= expo; i++)
    {
        resul *= base;
    }

    return resul;
}

float soma(int n)
{
    int i, j;
    float soma = 1;

    for(i = 1, j = (n - 1); j >= 1; i++, j--)
    {
        soma += (float)potencias(j, i) / fatorial(i);
    }

    return soma;
}