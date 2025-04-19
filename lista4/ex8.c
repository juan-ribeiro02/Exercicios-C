#include <stdio.h>
#include <ctype.h>

void main()
{
    const int QUANT = 3;
    int i, matricula, idade, anosEmpresa, idadeMenor21 = 0, masculino = 0, feminino = 0, funcionarioNovo = 0, funcionarioVelho = 0, testeVelho = 0, testeNovo = 200, idadeQuantoEntrou;
    char genero;
    float salario, somaSalarioMascu, mediaSalarioMascu;

    for (i = 1; i <= QUANT; i++)
    {
        printf("\nInforme sua matricula:");
        scanf("%d", &matricula);

        printf("Informe seu genero:");
        scanf(" %c", &genero);
        genero = toupper(genero);

        printf("Informe sua idade:");
        scanf("%d", &idade);

        printf("Informe seu salario:");
        scanf("%f", &salario);

        printf("Informe seu tempo na empresa:");
        scanf("%d", &anosEmpresa);

        idadeQuantoEntrou = idade - anosEmpresa;

        if (idadeQuantoEntrou < 21)
        {
            idadeMenor21++;
        }

        if (genero == 'F')
        {
            feminino++;
        }
        else //se for masculino
        {
            somaSalarioMascu += salario;
        }
        //outra forma de fazer:
        // if (genero == 'M')
        // {
        //     masculino++;
        //     somaSalarioMascu += salario;
        // }
        
        if (anosEmpresa > testeVelho)
        {
            testeVelho = anosEmpresa;
            funcionarioVelho = matricula;
        }
        
        if (anosEmpresa < testeNovo)
        {
            testeNovo = anosEmpresa;
            funcionarioNovo = matricula;
        }
    }

    masculino = QUANT - feminino; //contando os homens
    mediaSalarioMascu = somaSalarioMascu / masculino;
    
    printf("%d sao os funcionarios que entraram na empresa com menos de 21 anos\n", idadeMenor21);
    printf("A quantidade de pessoas do sexo feminino na empresa e: %d\n", feminino);
    printf("A media do salario das pessoas do sexo masculino e: R$%.2f\n", mediaSalarioMascu);
    printf("A matricula do funcionario mais antigo e: %d\n", funcionarioVelho);
    printf("A matricula do funcionario mais novo e: %d", funcionarioNovo);
}