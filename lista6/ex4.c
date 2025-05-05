// QUESTÃO 04: A prefeitura de uma cidade
// fez uma pesquisa com 300 de seus
// habitantes, coletando dados sobre o
// salário e número de filhos. A prefeitura
// deseja saber:
// a) média do salário da população;
// b) média do número de filhos;
// c) maior salário;
// d) percentual de pessoas com salário até
// R$ 1.000,00.

#include <stdio.h>

void main()
{
    const int QUANT = 3;
    float salario, mediaSalario, mediaFilhos, maiorSalario = 0, salarioTotal = 0, perSalario1000;
    int numFilhos = 0, i, filhosTotal = 0, salarioAte1000 = 0;

    for (i = 1; i <= QUANT; i++)
    {
        printf("\nInforme seu salario?");
        scanf("%f", &salario);

        printf("Informe quantos filhos voce tem:");
        scanf("%d", &numFilhos);

        filhosTotal += numFilhos; // somando o total de filhos da pooulaco
        salarioTotal += salario;

        if (salario > maiorSalario) // pegando maior salario
        {
            maiorSalario = salario;
        }

        if (salario <= 1000)
        {
            salarioAte1000++;
        }
    }

    mediaSalario = salarioTotal / QUANT;

    mediaFilhos = (float)filhosTotal / QUANT;

    perSalario1000 = (100 * salarioAte1000) / QUANT;

    printf("\nA media dos salarios e: R$%.2f", mediaSalario);
    printf("\nA media dos filhos e: %.2f", mediaFilhos);
    printf("\nO maior salario e de R$%.2f", maiorSalario);
    printf("\n%.2f%% tem ate o salario ate R$1000", perSalario1000);
}