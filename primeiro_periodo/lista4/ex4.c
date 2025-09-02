#include <stdio.h>

void main()
{
    int i, numeroNeg = 0, somaPosi = 0, numero;
    float media, numeroPosi = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Informe o %d numero;", i);
        scanf("%d", &numero);

        if (numero < 0)
        {
            numeroNeg++;
        }
        else if (numero > 0)
        {
            numeroPosi++;
            somaPosi = somaPosi + numero;
        }
    }

    media = somaPosi / numeroPosi;

    printf("A quantidade de numeros negativos e: %d\n", numeroNeg);
    printf("A media dos valores positivos e: %f", media);
}