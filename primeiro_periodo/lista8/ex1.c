// Desenvolver uma função que exiba os múltiplos
// de N compreendidos no intervalo definido por
// A e B.

#include<stdio.h>

void multiploEntre(int n, int a, int b)
{
    int i, z;

    if (a > b)
    {
        z = a;
        a = b;
        b = z;
    }
    
    for(i = a; i<=b; i++)
    {
        if(i % n == 0)
        {
            printf("%d\n", i);
        }
    }
}

void main()
{
    int n, a, b;

    printf("Informe um numero:");
    scanf("%d", &n);

    printf("Informe outro numero:");
    scanf("%d", &a);

    printf("Informe outro numero:");
    scanf("%d", &b);

    multiploEntre(n, a, b);
}