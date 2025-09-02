#include <stdio.h>

int vetorCrescente(float vetor[], int tamanho);

void main()
{
    int i, tamanho, resultado;

    printf("Informe o tamanho do vetor:");
    scanf("%d", &tamanho);

    float vet[tamanho];

    for (i = 0; i < tamanho; i++)
    {
        printf("Informe o %d numero do vetor:", i + 1);
        scanf("%f", &vet[i]);
    }

    resultado = vetorCrescente(vet, tamanho);

    if (resultado == 0)
    {
        printf("O vetor nao e crescente.");
    }
    else
    {
        printf("O vetor e crescente.");
    }
}

int vetorCrescente(float vetor[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho - 1; i++) //tamanho - 1, para no if, a posicao tamanho + 1(invalido) nao seja acessada 
    {
        if(vetor[i + 1] < vetor[i])
        {
            return 0; //0 para nao crescente
        }
    }

    return 1; //1para crescente
}