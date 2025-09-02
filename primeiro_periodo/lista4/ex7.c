#include <stdio.h>
#include <ctype.h>

void main()
{
    char genero, resposta;
    int i, mascuGosta = 0, mascuNaoGosta = 0, feminGosta = 0, feminNaoGosta = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Informe seu genero: (M - masculino / F - feminino)");
        scanf(" %c", &genero);
        genero = toupper(genero);

        printf("Informe se gostou ou nao da mudanca:");
        scanf(" %c", &resposta);
        resposta = toupper(resposta);

        if (genero == 'M')
        {
            if (resposta == 'G')
            {
                mascuGosta++;
            }
            else if (resposta == 'N')
            {
                mascuNaoGosta++;
            }
        }
        else if (genero == 'F')
        {
            if (resposta == 'G')
            {
                feminGosta++;
            }
            else if (resposta == 'N')
            {
                feminNaoGosta++;
            }
        }
    }

    printf("O numero de pessoas que gostaram foi: %d\n", mascuGosta + feminGosta);
    printf("O numero de pessoas que gostaram foi: %d\n", mascuNaoGosta + feminNaoGosta);

    if (mascuGosta > feminGosta)
    {
        printf("No publico masculino a aceitacao foi melhor.");
    }
    else
    {
        printf("No publico feminino a aceitacao foi melhor");
    }
}