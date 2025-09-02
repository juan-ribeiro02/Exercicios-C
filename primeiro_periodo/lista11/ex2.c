// Questão 02:
// Considere a existência de dois conjuntos
// numéricos A e B contendo n1 e n2 elementos,
// respectivamente. Pede-se o desenvolvimento
// de uma função que determine se um dos
// conjuntos está contido no outro, retornando os
// seguintes códigos:
//  1, se A estiver contido em B;
//  2, se B estiver contido em A;
//  0, caso contrário.

#include <stdio.h>

int vetorCont(float vetor1[], float vetor2[], int tamanho1, int tamanho2);

void pedirVetor(float vetor[], int tamanho);
void exibirVetor(float vetor[], int tamanho);

void main()
{
    int quantA = 4;
    float vA[4] = {1, 2, 3, 4};
    int quantB = 2;
    float vB[2] = {2, 4};


}

int vetorCont(float vetor1[], float vetor2[], int tamanho1, int tamanho2)
{
    int i, j;

    for (i = 0; i < tamanho1; i++)
    {
        for (j = 0; i < tamanho2; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                
            }
        }
    }

    return 0;
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

