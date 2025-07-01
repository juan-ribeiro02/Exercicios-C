#include <stdio.h>

void interseccaoVetor(float vetor1[], float vetor2[], float vetorInter[], int tam1, int tam2, int *tamInter);
void pedirVetor(float vetor[], int tamanho);
void exibirVetor(float vetor[], int tamanho);

void main()
{
    int quantA = 5;
    float vA[5] = {1, 2, 3, 5, 7};
    int quantB = 4;
    float vB[4] = {2, 5, 7, 8};
    float vC[5];
    int quantC = 0;

    interseccaoVetor(vA, vB, vC, quantA, quantB, &quantC);

    exibirVetor(vC, quantC);
}

void interseccaoVetor(float vetor1[], float vetor2[], float vetorInter[], int tam1, int tam2, int *tamInter)
{
    int i, j;

    for (i = 0; i < tam1; i++)
    {
        for (j = 0; j < tam2; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                vetorInter[*tamInter] = vetor1[i];
                (*tamInter)++;
            }
        }
    }
}

void pedirVetor(float vetor[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("Informe o %d numero do vetor:", i + 1);
        scanf("%f", &vetor[i]);
    }
}

void exibirVetor(float vetor[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("%f\n", vetor[i]);
    }
}
