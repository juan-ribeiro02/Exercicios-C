#include <stdio.h>

void main()
{
    int i, n = 0;

    for(i = 1000 ; n<5 ; i++)
    {
        if(i % 11 == 5)
        {
            printf("%d\n", i);
            n++;
        }
    }
}