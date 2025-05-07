#include <stdio.h>

void main()
{
    const int QUANT = 15;
    int i, num, somaNumPrim50 = 0, menorNum51ate100, somaNUmUltms50 = 0, quantUlts50 = 0;
    float mediaUlt50;

    for (i = 1; i <= QUANT; i++)
    {
        printf("Informe um numero:");
        scanf("%d", &num);

        if(i <= 5)
        {
            somaNumPrim50 += num;
        }
        else if(i <= 10)
        {
            if(num < menorNum51ate100)
            {
                menorNum51ate100 = num;
            }
        }
        else
        {
            somaNUmUltms50 += num;
            quantUlts50++;
        }
    }

    mediaUlt50 = somaNUmUltms50/quantUlts50;

    printf("a soma dos 50 primeiros numeros e: %d\n", somaNumPrim50);
    printf("O menor numero do 51 ate o 100 e: %d\n", menorNum51ate100);
    printf("A media dos ultimos 50 numeros e: %f\n", mediaUlt50);
}