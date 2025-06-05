#include <stdio.h>

void leituraDados(int *contElemntos, int *maiorElemento);

void main()
{
    int cont, maior;

    leituraDados(&cont, &maior);

    printf("%d - %d", cont, maior);
}

void leituraDados(int *contElemntos, int *maiorElemento)
{
    int i, n;
    *contElemntos = 0;
    *maiorElemento = 0;
    
    while (i != 0)
    {
        printf("Informe um numero:");
        scanf("%d", &n);

        if(n == 0)
        {
            break;
        }

        (*contElemntos)++;

        if (n > *maiorElemento)
        {
            *maiorElemento = n;
        }
    }
}