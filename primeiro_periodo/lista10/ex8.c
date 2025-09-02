#include <stdio.h>

int posicaoDoX(float vetor[], int tamanho, float x);
void pedirVetor(float vetor[], int tamanho);
void exibirVetor(float vetor[], int tamanho);

void main()
{
    int tamanho = 5;
    float vetor[tamanho], x, posicao;

    pedirVetor(vetor, tamanho);

    printf("Informe o numero que voce quer achar a posicao:");
    scanf("%f", &x);

    posicao = posicaoDoX(vetor, tamanho, x);

    printf("A posicao do numero %.0f no vetor e %.0f", x, posicao);
}

int posicaoDoX(float vetor[], int tamanho, float x)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] >= x)
        {
            return i;
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
