#include<stdio.h>

void main()
{
    int n1, n2, a1, a2, a3, resultado, maior, menor, meio;

    printf("Informe um numero inteiro de 3 algarismos:");
    scanf("%d", &n1);

    if ((n1 < 100) || (n1 > 999))
    {
        printf("Informe um numero valido:");
    }
    else
    {
        a3 = n1 % 10;
        resultado = n1 / 10;
        a2 = resultado % 10;
        a1 = resultado /10; 

        if ((a3 > a1) && (a3 > a2))
        {
            maior = a3;
        }
        else if (a1 > a2)
        {
            maior = a1;
        }
        else
        {
            maior = a2;
        }

        if ((a3 < a2) && (a3 < a1))
        {
            menor = a3;
        }
        else if (a2 < a1)
        {
            menor = a2;
        }
        else
        {
            menor = a1;
        }

        meio = a3 + a2 + a1 - maior - menor;

        n2 = (menor*100)+(meio*10)+maior;

        printf("%d", n2);
    }
}