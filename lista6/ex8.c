// QUESTÃO 08: Faça um programa que leia
// um número real x e um número inteiro y.
// Em seguida, o programa deve ler 100
// números reais e calcular quantos destes
// estão no intervalo definido por [x-y,x+y].

#include<stdio.h>

void main()
{
    const int QUANT = 10;
    float x, num;
    int i, y, countIntervalo = 0;

    printf("Informe um numero qualquer:");
    scanf("%f", &x);
    
    printf("Informe um numero inteiro:");
    scanf("%d", &y);

    for(i = 1; i <= QUANT; i++)
    {
        printf("\nInforme um numero qualquer:");
        scanf("%f", &num);

        if((num > (x - y)) && (num < (x + y)))
        {
            countIntervalo++;
        }
    }

    printf("\nExistem %d dentro deste intervalo.", countIntervalo);
}