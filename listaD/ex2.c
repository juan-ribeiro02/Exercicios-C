#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pedirVetAteTresZero(int vetor[], int capacidade, int *tamanho);
int numDeImparNoVetor(int vetor[], int tamanho);
int somaosParesNoVetor(int vetor[], int tamanho);
float mediaPrimosNoVetor(int vetor[], int tamanho);

void preencherAleatorio(int vetor[], int tamanho, int limite);
void exibirVetor(int vetor[], int tamannho);

void main()
{
    int tam = 0;
    int v[20];

    pedirVetAteTresZero(v, 20, &tam);

    exibirVetor(v, tam);

    printf("Quantidade de impares:\n");
    printf("%d", numDeImparNoVetor(v, tam)); 

    printf("\nSoma dos pares:\n");
    printf("%d", somaosParesNoVetor(v, tam));
}

void pedirVetAteTresZero(int vetor[], int capacidade, int *tamanho)
{
    int i, tresZeros = 0;

    for (i = 0; i < capacidade; i++)
    {
        printf("Informe os numeros:");
        scanf("%d", &vetor[i]);

        (*tamanho)++;

        if (vetor[i] == 0)
        {
            tresZeros++;
        }

        if (tresZeros == 3)
        {
            printf("Voce escreveu os 3 zeros\n");
            break;
        }
    }
}

int numDeImparNoVetor(int vetor[], int tamanho)
{
    int i, numImpar = 0;

    for (i = 0; i < tamanho; i++)
    {
        if(vetor[i] % 2 == 1)
        {
            numImpar++;
        }
    }

    return numImpar;
}

int somaosParesNoVetor(int vetor[], int tamanho)
{
    int i, somaPares = 0;

    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            somaPares += vetor[i];
        }
    }

    return somaPares;
}

float mediaPrimosNoVetor(int vetor[], int tamanho)
{
    int i
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

void exibirVetor(int vetor[], int tamannho)
{
    int i;

    for (i = 0; i < tamannho; i++)
    {
        printf("%d\n", vetor[i]);
    }
}