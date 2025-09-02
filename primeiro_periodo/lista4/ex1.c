#include <stdio.h>

void main()
{
    int n, y, i, multiplo;

    printf("Informe um numero:");
    scanf("%d", &n);

    printf("Informe outro numero:");
    scanf("%d", &y);

    printf("Os multiplos de %d menores que %d sao:", y, n);

    for (i = 1, multiplo = 1; multiplo < n; multiplo = i * y , i++)
    {
        printf("%d\n", multiplo);
    }
}