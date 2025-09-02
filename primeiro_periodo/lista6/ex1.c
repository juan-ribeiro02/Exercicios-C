#include<stdio.h>

void main()
{
    int n, i, m, multiplos;

    printf("Informe um número:");
    scanf("%d", &n);

    for(i = 1; i <= 5; i++)
    {
        printf("Informe um numero:");
        scanf("%d", &m);

        if(m % n == 0)
        {
            multiplos++;
        }
    }

    printf("%d", multiplos);
}