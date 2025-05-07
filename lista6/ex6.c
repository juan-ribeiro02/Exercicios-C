#include <stdio.h>

void main()
{
    const int QUANT = 5;
    int i, n, somaPar = 0, maiorNumOrdPar = 0, numPar = 0;
    float mediaPar;

    for (i = 1;i <= QUANT; i++)
    {
        printf("Informe um numero:");
        scanf("%d", &n);

        if(i % 2 == 0)
        {
            if(n > maiorNumOrdPar)
            {
                maiorNumOrdPar = n;
            }
        }

        if (n % 2 == 0)
        {
            somaPar += n;
            numPar++;
        }
    }
    mediaPar = (float)somaPar/numPar;

    printf("O maior numero de ordem par e %d", maiorNumOrdPar);
    printf("\nA media dos numeros pares e %f", mediaPar);
}