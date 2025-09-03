#include<stdio.h>
#include<string.h>

void strinv(char s1[]);
void strinvAUX(char s1[], int i);

void main()
{
    char s1[] = "Juan Ribeiro de Azevedo";

    strinv(s1);
}

void strinv(char s1[])
{
    strinvAUX(s1, strlen(s1) - 1);
}

void strinvAUX(char s1[], int i)
{
    if(i >= 0)
    {
        printf("%c", s1[i]);
        strinvAUX(s1, i - 1);
    }
}