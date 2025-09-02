#include <stdio.h>

void main()
{
    int i, n, j, resul = 1;

    printf("Informe um numero:");
    scanf("%d", &n);

    for( i = 1, j = 2; i <= n; i++, j+=j) 
    {
        printf("%d\n", resul);
        resul *= j;
    }
}