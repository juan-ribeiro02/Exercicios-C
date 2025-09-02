#include <stdio.h>

void main()
{
    float mediaPond;
    int i = 1, num, peso, numVezesPeso, somaNum = 0, somaPeso = 0;

    printf("Para parar o codigo digite a qualquer hora o numero 0");

    while (i = 1)
    {
        printf("\nInforme um numero:");
        scanf("%d", &num);

        if(num == 0)
        {
            break;
        }

        printf("Informe o peso:");
        scanf("%d", &peso);

        if(peso == 0)
        {
            break;
        }

        numVezesPeso = num * peso;
        somaNum += numVezesPeso;
        somaPeso +=peso;
    }

    mediaPond = (float)somaNum/somaPeso;

    printf("\nA media pondera desses numeros e %f", mediaPond);
}