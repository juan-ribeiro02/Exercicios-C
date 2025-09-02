#include <stdio.h>

void main()
{
    char escolha;
    float x, y, area; // usando x e y para as medidas, pois é melhor do que criar raio, lado, altura e etc.
    float pi = 3.14159;

    printf("Circulo - c\nQuadrado - q\nRetangulo - r\nTriangulo - t\nEscolha uma figura geometrica:");
    scanf("%c", &escolha);

    if (escolha == 'c')
    {
        printf("Informe o raio do circulo:");
        scanf("%f", &x);

        area = pi * (x * x);

        printf("A area do circulo e %.2f", area);
    }
    else
    {
        if (escolha == 'q')
        {
            printf("Informe a base do quadrado:");
            scanf("%f", &x);

            area = x * x;

            printf("A area do quadrado e %.2f", area);
        }
        else
        {
            if (escolha == 'r')
            {
                printf("Informe a base do retangulo:");
                scanf("%f", &x);
                printf("Informe a altura:");
                scanf("%f", &y);

                area = x * y;

                printf("A area do retangulo e %.2f", area);
            }
            else
            {
                if (escolha == 't')
                {
                    printf("Informe a base do trianglo:");
                    scanf("%f", &x);
                    printf("Informe a altura:");
                    scanf("%f", &y);
    
                    area = (x * y) / 2;
    
                    printf("A area do triangulo e %.2f", area);
                }
                else
                {
                    printf("Letra Invalida");
                }
            }
        }
    }
}