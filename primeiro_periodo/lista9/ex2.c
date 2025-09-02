#include <stdio.h>

void potenciasDeDoisEntre(int a, int b, int *numDePotencia, int *maiorPotencia);

void main()
{
    int contPot, maiorPot, a = 10, b = 100;

    potenciasDeDoisEntre(a, b, &contPot, &maiorPot);

    printf("Numeros de potencias entre %d e %d: %d\nA maior potencia no intervalo e: %d", a, b, contPot, maiorPot);
}

void potenciasDeDoisEntre(int a, int b, int *numDePotencia, int *maiorPotencia)
{
    int i;
    *numDePotencia = 0;

    for (i = 1; i <= b; i += i) // fazendo as pot de 2
    {
        if (i >= a)
        {
            (*numDePotencia)++;   // contando as pot entre a e b
            *maiorPotencia = i; // guardando maior pot
        }
    }
}