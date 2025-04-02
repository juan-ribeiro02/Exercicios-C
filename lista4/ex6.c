#include <stdio.h>

void main()
{
    int i, n, dezena, unidade, soma;

    printf("Informe um numero");
    scanf("%d", &n);

    if (n > 18)
    {
        printf("O numero tem que ser menor ou igual 18");
    }
    else
    {
        for (i = 1; i <= 99; i++)
        {
            dezena = i % 10;
            unidade = i / 10;
            soma = dezena + unidade;

            if (soma == n)
            {
                printf("%d\n", i);
            }
        }
    }
}