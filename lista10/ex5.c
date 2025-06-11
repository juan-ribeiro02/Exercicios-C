#include <stdio.h>

void vetorImparPar(int vetor[], int tamanho, int vetorImpar[], int *tamImpar, int vetorPar[], int *tamPar);
void addVetor(int vet[], int tamanho);
void printVetor(int vet[], int tamanho);

void main()
{
    int tamanho;

    printf("Informe o tamanho do vetor:");
    scanf("%d", &tamanho);

    int vet[tamanho], vetPar[tamanho], vetImpar[tamanho];
    int tamPar = 0, tamImpar = 0;

    addVetor(vet, tamanho);

    vetorImparPar(vet, tamanho, vetImpar, &tamImpar, vetPar, &tamPar);

    printf("\nVetor normal:\n");
    printVetor(vet, tamanho);

    printf("\nVetor impar:\n");
    printVetor(vetImpar, tamImpar);

    printf("\nVetor par:\n");
    printVetor(vetPar, tamPar);
}

void vetorImparPar(int vetor[], int tamanho, int vetorImpar[], int *tamImpar, int vetorPar[], int *tamPar)
{
    int i;

    for(i = 0; i < tamanho; i++)
    {
        if(vetor[i] % 2 == 0)
        {
            vetorPar[*tamPar] = vetor[i];
            (*tamPar)++;
        }
        else
        {
            vetorImpar[*tamImpar] = vetor[i];
            (*tamImpar)++;
        }
    }
}

void addVetor(int vet[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("Informe o %d numero:", i + 1);
        scanf("%d", &vet[i]);
    }
}

void printVetor(int vet[], int tamanho)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("%d posicao do vetor:%d\n", i + 1, vet[i]);
    }
}