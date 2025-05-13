#include<stdio.h>

void main()
{
    int vetor[5] = {10, 20, 30, 40, 50};
    int i;
    float s = 0;

    for(i = 4; i >= 0; i--)
    {
        printf("%d\n", vetor[i]);
    }
}