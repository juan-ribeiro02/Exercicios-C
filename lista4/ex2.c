#include <stdio.h>

void main()
{
    int i, j, soma = 0;

    for (i = 1, j = 50; i <= 50, j >= 1; i++, j--)
    {
        printf("%d, %d\n", i, j);

        soma = soma + i + j;
    }

    printf("%d", soma);
}