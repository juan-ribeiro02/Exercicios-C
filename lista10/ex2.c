#include <stdio.h>

void trocarVetor(float vetor[], int tamanho);

void main()
{
    float vet[] = {1.2, 2.3, 4.5, 6.4, 8};
    int i, tamanho = 5;

    for(i = 0; i < tamanho; i++)
    {
        printf("%.1f ", vet[i]);
    }

    trocarVetor(vet, tamanho);
    printf("\n");

    for(i = 0; i < tamanho; i++)
    {
        printf("%.1f ", vet[i]);
    }
}

void trocarVetor(float vetor[], int tamanho)
{
    int i;
    float temp;

    for (i = 1; i < tamanho; i+=2)
    {
        temp = vetor[i - 1];
        vetor[i - 1] = vetor[i];
        vetor[i] = temp;
    }
}