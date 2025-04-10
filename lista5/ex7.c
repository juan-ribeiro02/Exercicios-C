#include <stdio.h>

void main()
{
    int i, j, n, soma = 0, produto = 1;

    printf("Quantos numeros quer escrever:");
    scanf("%d", &j);

    for (i = 1; i <= j; i++)
    {
        printf("\nEscreva um numero:");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            soma += n;
            printf("A soma dos pares e: %d\n", soma);
        }
        else
        {
            produto *= n;
            printf("O produto dos impares e: %d\n", produto);
        }
    }
}