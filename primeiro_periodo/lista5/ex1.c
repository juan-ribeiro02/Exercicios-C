/*QUESTÃO 01:
Dado um número inteiro N, fazer um
programa que exiba os números pares
iguais ou inferiores a N.
*/

#include<stdio.h>

void main()
{
    int i, n;

    printf("Informe um numero:");
    scanf("%d", &n);

    for (i = 0; i <= n; i+=2)
    {
        printf("%d\n", i);
    }
}