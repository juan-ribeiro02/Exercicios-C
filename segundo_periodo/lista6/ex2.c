#include<stdio.h>
#include<string.h>
#include<time.h>

int IsPalindromo(char v[]);
int IsPalindromoAUX(char v[], int i, int j);

void main()
{
   char frase1[] = "nanan";
   char frase2[] = "juuj";
   char frase3[] = "jorge";

   printf("%d\n", IsPalindromo(frase1));
   printf("%d\n", IsPalindromo(frase2));
   printf("%d\n", IsPalindromo(frase3));
}

int IsPalindromo(char v[])
{
   return IsPalindromoAUX(v, 0, strlen(v) - 1);
}

int IsPalindromoAUX(char v[], int i, int j)
{
   if (v[i] != v[j])
   {
       return 0;
   }
   else if (i >= j)
   {
       return 1;
   }
   else
   {
       return IsPalindromoAUX(v, i + 1, j - 1);
   }
}
