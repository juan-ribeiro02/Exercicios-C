#include<stdio.h>

int mmc(int n1, int n2)
{
    int i = 1, mmc, j = 1;

    while(i == 1)
    {
        if((j % n1 == 0) && (j % n2 == 0))
        {
            mmc = j;
            break;
        }
        else
        {
            j++;
        }
    }
    return mmc;
}

void main()
{
    printf("%d", mmc(22, 99));
}