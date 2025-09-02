#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void vetorProposto(int vetor1[], int tamanho1, int vetor2[], int tamanho2);
void preencherAleatorio(int vetor[], int tamanho, int limite);
void exibirVetor(int vetor[], int tamannho);

void main()
{

}

void vetorProposto(int vetor1[], int tamanho1, int vetor2[], int tamanho2)
{
    
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