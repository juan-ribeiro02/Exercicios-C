#include<stdio.h>

void main()
{
    int i, j, resul;

    for (i = 1 ; i<=9 ; i++)
    {
        for (j = 0 ; j <= 10 ; j++)
        {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
}