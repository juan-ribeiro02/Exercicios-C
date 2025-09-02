#include<stdio.h>

void main()
{
    float peso, gravidadePlaneta, pesoPlaneta;
    int numeroPlaneta;

    printf("1 Mercurio 0,37\n2 Venus 0,88\n3 Marte	0,38\n4 Jupiter 2,64\n5 Saturno 1,15\n6 Urano 1,17");

    printf("\nInforme seu peso:");
    scanf("%f", &peso);

    printf("\nInforme o numero do planeta no qual voce quer ver seu peso:");
    scanf("%d", &numeroPlaneta);

    switch (numeroPlaneta)
    {
    case 1: gravidadePlaneta = 0.37;
        break;
    case 2: gravidadePlaneta = 0.88;
        break;
    case 3: gravidadePlaneta = 0.38;
        break;
    case 4: gravidadePlaneta = 2.64;
        break;
    case 5: gravidadePlaneta = 1.15;
        break;
    case 6: gravidadePlaneta = 1.17;
        break;
    default:
        printf("Informe um numero valido");
    }

    pesoPlaneta = ((peso/10)*gravidadePlaneta);

    printf("Seu peso no planeta escolhido e %f", pesoPlaneta);
} 