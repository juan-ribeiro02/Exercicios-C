/*QUESTÃO 02:
Desenvolver um programa que calcule a
soma dos números de 1 a N, sendo N um
número inteiro fornecido pelo usuário.
*/

#include<stdio.h>

void main()
{
    int i, n, soma;

    printf("Informe um numero:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        soma += i;
    }

    printf("A soma de 1 ate %d e igual a %d", n, soma);
}