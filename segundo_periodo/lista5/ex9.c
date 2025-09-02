#include<stdio.h>

int IsPA(int v[], int quant, int i);

void main()
{
    int v[4] = {1, 3, 5, 7};

    printf("%d", IsPA(v, 4, 0));
}

int IsPA(int v[], int quant, int i)
{
    if(quant <= 1)
    {
        return 1;
    }
    if(i >= quant -1)
    {
        return 1;
    }
    
    int razao = v[1] - v[0];

    if ((v[i + 1] - v[i]) != razao)
    {
        return 0;
    }

    return IsPA(v, quant, i + 1);
}