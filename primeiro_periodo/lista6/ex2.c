#include<stdio.h>

void main()
{
    int i, n, m, testeMaior, testeMenor;

    printf("informe um numero:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Informe um numero:");
        scanf("%d", &m);

        if (m > testeMaior)
        {
            testeMaior = m;
        }

        if (m < testeMenor)
        {
            testeMenor = m;
        }
    }

    printf("O menor numero do conjunto e %d.", testeMenor);
    printf("\nO maior numero do conjunto e %d.", testeMaior);
}