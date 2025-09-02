#include <stdio.h>

void main()
{
    int dia1, dia2, mes1, mes2, ano1, ano2;

    printf("Informe um data(ddmmaaaa):\n");
    printf("Dia:");
    scanf("%d", &dia1);
    printf("Mes:");
    scanf("%d", &mes1);
    printf("Ano:");
    scanf("%d", &ano1);

    printf("Informe outra data(ddmmaaaa):\n");
    printf("Dia:");
    scanf("%d", &dia2);
    printf("Mes:");
    scanf("%d", &mes2);
    printf("Ano:");
    scanf("%d", &ano2);

    if (ano1 > ano2)
    {
        printf("%d/%d/%d e mais recente que %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
    }
    else
    {
        if (ano2 > ano1)
        {
            printf("%d/%d/%d e mais recente que %d/%d/%d", dia2, mes2, ano2, dia1, mes1, ano1);
        }
        else // ano igual
        {
            if (mes1 > mes2)
            {
                printf("%d/%d/%d e mais recente que %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
            }
            else
            {
                if (mes2 > mes1)
                {
                    printf("%d/%d/%d e mais recente que %d/%d/%d", dia2, mes2, ano2, dia1, mes1, ano1);
                }
                else // mes e ano igual
                {
                    if (dia1 > dia2)
                    {
                        printf("%d/%d/%d e mais recente que %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
                    }
                    else
                    {
                        if (dia2 > dia1)
                        {
                            printf("%d/%d/%d e mais recente que %d/%d/%d", dia2, mes2, ano2, dia1, mes1, ano1);
                        }
                        else
                        {
                            printf("%d/%d/%d é igual a %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
                        }
                    }
                }
            }
        }
    }
}