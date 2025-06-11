// QUESTÃO 07:
// Desenvolver uma função que remova
// determinado elemento (todas as suas
// ocorrências) de um vetor de float. Ao final,
// retornar o número de remoções realizadas.

#include <stdio.h>

void removeNumVetor(float vetor[], int tamanho, float numRemove);

void main()
{

}

void removeNumVetor(float vetor[], int tamanho, float numRemove)
{
    int i;

    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] == numRemove)
        {
            for (; i < tamanho; i++)
            {
                vetor[i] = vetor[i + 1];
            }
        }
    }
}