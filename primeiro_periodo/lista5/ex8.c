#include <stdio.h>

void main()
{
    int i, j = 1, numeroCarteira, numMultas, motoMaisMulta, numMotoMaisMulta = 0;
    float valorMulta, somaMulta, somaMultaTotal = 0;
    char para;

    printf("PARA PARAR O CODIGO DIGITE 'P'!!!!");

    while (para != 'P')
    {
        somaMulta = 0; //igual a zero para nao juntar com os valores quando o looping recomecar

        printf("\nMOTORISTA %d", j);

        printf("\nInforme o numero da carteira do motorista:");
        scanf(" %d", &numeroCarteira);

        printf("Informe o numero de multas:");
        scanf(" %d", &numMultas);

        for(i = 1; i <= numMultas ; i++) //calculando as multas do motorista da vez
        {
            printf("Informe o valor da multa %d:", i);
            scanf("%f", &valorMulta);

            somaMulta += valorMulta;
        }

        printf("A divida do motorista %d e R$%.2f.", j, somaMulta);

        //colocando o motorista com maior numero de multas em uma variavel
        if (numMultas > numMotoMaisMulta)
        {
            numMotoMaisMulta = numMultas;
            motoMaisMulta = numeroCarteira;
        }
        

        somaMultaTotal += somaMulta; //juntando todas as multas para mostrar a arrecadacao no final
        j++; //so para aparecer o numero do motorsita da vez
        printf("\nDeseja parar:");
        scanf(" %c", &para);
    }

    printf("Total da arrecadacao com as multas foi de R$%0.2f", somaMultaTotal);
    printf("\nO motorista com mais multa foi: %d", motoMaisMulta);
}