#include <stdio.h>

void vetorSequencia(int vetor[50]);

void main()
{
    int i, vet[50];

    vetorSequencia(vet);

    for (i = 0; i < 50; i++)
    {
        printf("%d\n", vet[i]);
    }
}

void vetorSequencia(int vetor[50])
{
    int i, j = 1, soma = 1;

    for (i = 0; i < 50; i++)
    {
        vetor[i] = soma;
        soma += j;
        j++;
    }
}