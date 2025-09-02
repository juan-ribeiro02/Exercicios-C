// QUESTÃO 07:
// Desenvolver uma função que remova
// determinado elemento (todas as suas
// ocorrências) de um vetor de float. Ao final,
// retornar o número de remoções realizadas.

#include <stdio.h>

int removeNumVetor(float vetor[], int tamanho, float numRemove);

void main()
{
    int i, tamanho = 5, resul;
    float vet[tamanho], num;

    for (i = 0; i < tamanho; i++)
    {
        printf("Informe um numero:");
        scanf("%f", &vet[i]);
    }

    printf("Informe outro numero:");
    scanf("%f", &num);

    resul = removeNumVetor(vet, tamanho, num);

    printf("Numero de remocoes:%d", resul);

    for(i = 0; i < tamanho - resul + 1; i++)
    {
        printf("%f\n", vet[i]);
    }
}

int removeNumVetor(float vetor[], int tamanho, float numRemove)
{
    int i, j, remocoes = 0;

    for (i = 0; i < tamanho - remocoes; i++)
    {
        if (vetor[i] == numRemove)
        {
            for (j = i; j < tamanho - remocoes - 1; j++)
            {
                vetor[j] = vetor[j + 1];
            }
            remocoes++;
            i--;
        }
    }

    return remocoes;
}