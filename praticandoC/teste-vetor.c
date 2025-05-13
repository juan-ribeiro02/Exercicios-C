#include<stdio.h>

void main()
{
    int v[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Informe um numero:");
        scanf("%d", &v[i]);
    }

    printf("\nValores informados:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", v[i]);
    }
}