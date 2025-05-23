#include<stdio.h>

void sequencia(int n)
{
    int i, j;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j<= n; j++)
        {
            if(i != j)
            {
                printf("(%d %d) ", i, j);
            }
        }
    }
}

void main()
{
    sequencia(5);
}