#include <stdio.h>

int numerosNoVetor(int n, int vetor[], int tamanho);

void main()
{
    int i, j = 1, numero, tamanho;
    
    printf("Informe quantos numeros voce ira digitar:");
    scanf("%d", &tamanho);
    
    int vet[tamanho];
    
    for(i = 0; i < tamanho; i++)
    {
        printf("Informe o %d numero do vetor:", j);
        scanf("%d", &vet[i]);
        j++;
    }

    printf("Qual numero voce quer conferir quantas vezes aparece no codigo:");
    scanf("%d", &numero);

    printf("O numero %d aparece %d vezes no vetor.", numero, numerosNoVetor(numero, vet, tamanho));
}

int numerosNoVetor(int n, int vetor[], int tamanho)
{
    int i, cont = 0;

    for(i = 0; i < tamanho; i++)
    {
        if(n == vetor[i])
        {
            cont++;
        }
    }

    return cont;
}