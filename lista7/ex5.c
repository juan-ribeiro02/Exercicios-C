// QUESTÃO 05: Uma pesquisa foi feita
// coletando informações (idade, altura e
// peso) de um grupo de pessoas.
// Pede-se a implementação de um programa
// que proceda com a leitura de tais
// informações (até que o usuário opte por
// concluir a entrada de dados) e calcule:

//  A quantidade de pessoas com idade superior
// a 50 anos;
//  A média de altura das pessoas com mais de
// 80 kg;
//  O maior peso dentre as pessoas acima de
// 1.65 m de altura e com idade inferior a 30
// anos.

#include<stdio.h>
#include<ctype.h>

void main()
{
    int idade, pessoaIdadeMais50 = 0,i = 1, pessoaPesoMais80 = 0;
    float altura, somaAltura = 0, peso, maiorPeso = 0, mediaAlturaPesoMais80;
    char testeCont;

    while(i = 1)
    {
        printf("Informe sua idade:");
        scanf("%d", &idade);

        printf("Informe sua altura:");
        scanf("%f", &altura);

        printf("Informe sua peso:");
        scanf("%f", &peso);

        if (idade>50)
        {
            pessoaIdadeMais50++;
        }

        if(peso>80)
        {
            pessoaPesoMais80++;
            somaAltura += altura;
        }

        if(altura>1.65)
        {
            if(idade<30)
            {
                if(peso>maiorPeso)
                {
                    maiorPeso = peso;
                }
            }
        }
        printf("Quer continuar? ((S)im - (N)ao.");
        scanf(" %c", &testeCont);
        testeCont = toupper(testeCont);
    
        if(testeCont == 'N')
        {
            break;
        }
        else
        {
            continue;
        }
    }
    mediaAlturaPesoMais80 = somaAltura/pessoaPesoMais80;

    printf("\nExistem %d pessoas com mais de 50 anos.", pessoaIdadeMais50);
    printf("\nA media das alturas das pessoas com mais de 80 kilos e de %fm", mediaAlturaPesoMais80);
    printf("\nA peso com altura maior que 1,65m e menos de 30 anos e %fKg", maiorPeso);
}