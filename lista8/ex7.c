// QUESTÃO 07:
// Implementar uma função que, dado um
// número inteiro n, e o intervalo definido pelos
// números a e b, determine quantos valores do
// intervalo possuem divisores (sendo estes
// diferentes de 1) que também sejam divisores
// de n.
// Exemplo:
// n = 6
// a = 10 e b = 20
// Resposta = 7 (pois os números 10, 12, 14,
// 15, 16, 18 e 20 possuem divisores em
// comum com o número 6).

#include<stdio.h>

int divisores(int n, int a, int b)
{
    int i, j = 1, k = 1, cont = 0;

    for(i = a; i <= b; i++)
    {
        while (k == 1)
        {
            if((n % j == 0) && (i % j == 0))
            {
                cont++;
                break;
            }
            else 
            {
                j++;
            }
        }   
    }
    return cont;
}

void main()
{
    printf("%d", divisores(6, 10, 20));
}

