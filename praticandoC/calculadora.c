#include<stdio.h>

void main()
{
    float resul, num;
    int i = 1;
    char operadores, testeCont;

    // printf("Operadores\n| 1 | + |\n| 2 | - |\n| 3 | * |\n| 4 | / |");

    printf("\nInforme um numero:");
    scanf("%f", &resul);

    while(i = 1)
    {
        printf("\nInforme o operador:");
        scanf(" %c", &operadores);

        printf("\nInforme outro numero:");
        scanf("%f", &num);

        switch (operadores)
        {
            case '+':
                resul += num;
                break;

            case '-':
                resul -= num;
                break;

            case '*':
                resul *= num;
                break;
            
            case '/': 
                resul /= num;
                break;

            default:
                printf("Informe um operador valido.");
                break;
        }

        printf("\n%.2f\n", resul);

        printf("Quer continuar: S/N");
        scanf(" %c", &testeCont);
        testeCont = toupper(testeCont);

        if (testeCont == 'N')
        {
            break;
        }
    }
}