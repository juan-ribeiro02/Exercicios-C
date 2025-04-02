#include <stdio.h>

void main()
{
    float q, juros, montante;
    int i, rendimentoAoMes, ano, mes;

    printf("Informe a quantia investida:");
    scanf("%f", &q);

    printf("Informe o rendimento fixo ao mes da aplicacao:");
    scanf("%d", &rendimentoAoMes);

    printf("Informe quantos anos essa quantia ficara aplicada:");
    scanf("%d", &ano);

    mes = ano * 12;

    for (i = 1; i <= mes; i++, q += juros)
    {
        juros = q * (rendimentoAoMes / 100.0);
        montante = q;
        printf("No mes %d, rendeu R$%.2f. Seu montante e R$%.2f\n", i, juros, q);
    }

    printf("\nNo final de %d anos o montante sera R$%0.2f\n", ano, montante);
}
