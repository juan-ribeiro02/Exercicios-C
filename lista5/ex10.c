#include <stdio.h>

void main()
{
    char genero;
    float altura, maiorAltura = 0, menorAltura = 500, somaAlturaFem = 0, somaAlturaMasc = 0, mediaAlturaPopulacao, mediaAlturaFem, porcemMasc;
    int i, numFem = 0, numMasc = 0, numPopulacao;

    printf("Informe quantas pessoas seram perguntadas:");
    scanf("%d", &numPopulacao);

    for (i = 1; i <= numPopulacao; i++)
    {
        printf("Pessoa %d", i);

        printf("\nInforme a altura:");
        scanf(" %f", &altura);

        printf("Informe seu genero:");
        scanf(" %c", &genero);

        if (altura > maiorAltura) // Salvando maior altura
        {
            maiorAltura = altura;
        }

        if (altura < menorAltura) // salvando menor altura
        {
            menorAltura = altura;
        }

        if (genero == 'f') // se é feminino ou masculino, salvando o num de mulheres e a soma da altura, a mesma coisa para os homens
        {
            numFem++;
            somaAlturaFem += altura;
        }
        else
        {
            numMasc++;
            somaAlturaMasc += altura;
        }
    }
    porcemMasc = (100 * numMasc) / numPopulacao;

    mediaAlturaFem = somaAlturaFem / numFem;

    mediaAlturaPopulacao = (somaAlturaFem + somaAlturaMasc) / numPopulacao;

    printf("A maior altura da regiao e: %.0fcm\nA menor altura da regiao e: %.0fcm", maiorAltura, menorAltura);
    printf("\nA media da altura das mulheres e: %.0fcm", mediaAlturaFem);
    printf("\nA media da altura da populacao e: %.0fcm", mediaAlturaPopulacao);
    printf("\nA regiao e composta por %.2f de homens.", porcemMasc);
}