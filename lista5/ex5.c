#include <stdio.h>
#include <math.h>

void main()
{
    int i, n, j;

    printf("Informe um numero: ");
    scanf("%d", &n);

    for (i = 1, j = 1; i <= n; i++, j+=j)
    {
        printf("%d\n", j);
    }
}