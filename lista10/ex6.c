// QUESTÃO 06:
// Faça uma função que, dado um vetor de reais,
// altere todas as ocorrências do número A pelo
// número B.

#include <stdio.h>

void trocarVet(float vetor[], int tamanho, float numA, float numB);
void addVetor(float vetor[], int tamanho);
void printVetor(float vetor[], int tamanho);

void main()
{
    int tamanho;

    printf("Informe o tamanho do vetor:");
    scanf("%d", &tamanho);

    float vet[tamanho], num1, num2;

    addVetor(vet, tamanho);

    printf("Numero que quer substiuir:");
    scanf("%f", &num1);

    printf("Numero que ira sbstituir:");
    scanf("%f", &num2);

    trocarVet(vet, tamanho, num1, num2);

    printf("Vetor depois da mudanca:\n");
    printVetor(vet, tamanho);
}

void trocarVet(float vetor[], int tamanho, float numA, float numB)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] == numA)
        {
            vetor[i] = numB;
        }
    }
}

void addVetor(float vetor[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("informe o %d numero:", i + 1);
        scanf("%f", &vetor[i]);
    }
}

void printVetor(float vetor[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("%d posicao do vetor:%.2f\n", i + 1, vetor[i]);
    }
}