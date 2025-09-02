#include<stdio.h>

void main()
{
    float peso, altura, imc;

    printf("Informe sua altura:");
    scanf("%f", &altura);

    printf("Informe sua peso:");
    scanf("%f", &peso); 

    imc = (peso/(altura*altura));

    if (imc < 18.5)
    {
        printf("Voce esta abaixo do peso");
    }
    else
    {
        if (imc < 25)
        {
            printf("Voce esta no peso ideal");
        }
        else
        {
            if (imc < 30)
            {
                printf("Voce esta com sobrepeso");
            }
            else
            {
                if (imc < 35)
                {
                    printf("Voce esta com obesidade grau 1 ");
                }
                else
                {
                    if (imc < 40)
                    {
                        printf("Voce esta com obeesidade grau 2");
                    }
                    else
                    {
                        printf("Voce esta com obeesidade grau 3");
                    }
                }
            }
        }
    }
    printf("\n%.1f", imc);
}