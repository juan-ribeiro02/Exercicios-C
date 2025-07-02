#include <stdio.h>

void funcaoVetores(float vetor1[], int tamanho1, float vetor2[], int tamanho2, float vetorUniao[], int *tamanhoUniao);
void pedirVetor(float vetor[], int tamanho);
void exibirVetor(float vetor[], int tamanho);
int buscarNum(float vetor[], int tamanho, float numProcurado);

void main()
{
    // int quantA = 5;
    // float vA[5] = {1, 2, 3, 5, 7};
    // int quantB = 4;
    // float vB[4] = {2, 5, 7, 8};
    // float vC[5];
    // int quantC = 0;

	int quantA = 6;
	float vetA[6] = {5,9,4,3,6,1};
	int quantB = 4;	
	float vetB[4] = {8,4,6,2};
	float vetC[10];
	int quantC = 0;

    funcaoVetores(vetA, quantA, vetB, quantB, vetC, &quantC);

    exibirVetor(vetC, quantC);
}

void funcaoVetores(float vetor1[], int tamanho1, float vetor2[], int tamanho2, float vetorUniao[], int *tamanhoUniao)
{
    int i, posicao;

    for (i = 0; i < tamanho1; i++) //colocando os valores do vetor 1 no vetoruniao
    {
        vetorUniao[i] = vetor1[i];
    }

    *tamanhoUniao = tamanho1;

    for (i = 0; i < tamanho2; i++)
    {
        if (buscarNum(vetorUniao, *tamanhoUniao, vetor2[i]) == 0)
        {
            vetorUniao[*tamanhoUniao] = vetor2[i];
            (*tamanhoUniao)++;
        }
    }
}

int buscarNum(float vetor[], int tamanho, float numProcurado)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        if(vetor[i] == numProcurado)
        {
            return 1;
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
