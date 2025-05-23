#include<stdio.h>

int mdc(int n1, int n2)
{
    int i, mdc;

    for(i = 1; i<=n1; i++)
    {
        if((n1 % i == 0) && (n2 % i == 0))
        {
            mdc = i;
        }
    }

    return mdc;
}

void main()
{
    printf("%d", mdc(20, 24));
}