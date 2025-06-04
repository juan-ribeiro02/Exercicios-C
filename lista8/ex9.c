#include <stdio.h>

void mediaSomaDiv(int n, int *soma, float *media);

void main()
{
  int soma, n;
  float media;

  mediaSomaDiv(7, &soma, &media);

  printf("Soma: %d\nMedia: %f", soma, media);
}

void mediaSomaDiv(int n, int *soma, float *media)
{
  int i, contDiv = 0;
  *soma = 0;

  for (i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      *soma += i;
      contDiv++;
    }
  }

  *media = (float)*soma / contDiv;
}
