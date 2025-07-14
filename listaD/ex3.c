#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void paresImpares(int vetor1[], int tamanho1, int vetor2[], int *tamanho2);
void preencherAleatorio(int vetor[], int tamanho, int limite);
void exibirVetor(int vetor[], int tamannho);

void main()
{
    int tamA = 5;
    int vA[tamA];
    int vB[tamA];
    int tamB = 0;

    preencherAleatorio(vA, tamA, 100);

    exibirVetor(vA, tamA);

    printf("Depois da mudanca:\n");

    paresImpares(vA, tamA, vB, &tamB);

    exibirVetor(vB, tamB);
}

void paresImpares(int vetor1[], int tamanho1, int vetor2[], int *tamanho2)
{
    int i;

    for (i = 0; i < tamanho1; i++)
    {
        if (vetor1[i] % 2 == 0)
        {
            vetor2[*tamanho2] = vetor1[i];
            (*tamanho2)++;
        }
    }

    for (i = 0; i < tamanho1; i++)
    {
        if (vetor1[i] % 2 == 1)
        {
            vetor2[*tamanho2] = vetor1[i];
            (*tamanho2)++;
        }
    }
}

void preencherAleatorio(int vetor[], int tamanho, int limite)
{
    int i;

    srand(time(NULL));

    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand()%limite;
    }
}

void exibirVetor(int vetor[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("%d\n", vetor[i]);
    }
}