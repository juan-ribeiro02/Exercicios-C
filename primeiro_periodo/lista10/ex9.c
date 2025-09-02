#include <stdio.h>

void insercaoNoVetor(float vetor[], int *capacidade, int tamanho, float x);
int posicaoDoX(float vetor[], int tamanho, float x);
void pedirVetor(float vetor[], int tamanho);
void exibirVetor(float vetor[], int tamanho);

void main()
{
    int capacidade = 5, numAdd;
    float v[20];

    pedirVetor(v, capacidade);
    exibirVetor(v, capacidade);

    printf("Qual numero voce quer adicionar?");
    scanf("%f", &numAdd);

    insercaoNoVetor(v, &capacidade, 20, numAdd);

    printf("Vetor depois da adicao!!\n");
    exibirVetor(v, capacidade);
}

void insercaoNoVetor(float vetor[], int *capacidade, int tamanho, float x)
{
    int i, posicao;

    posicao = posicaoDoX(vetor, *capacidade, x);

    for (i = *capacidade - 1; i>=posicao; i--)
    {
        vetor[i + 1] = vetor[i];
    }

    vetor[posicao] = x;

    (*capacidade)++;
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
    return tamanho;
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
