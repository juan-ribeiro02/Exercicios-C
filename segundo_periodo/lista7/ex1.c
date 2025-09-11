#include<stdio.h>
#include<string.h>

int caracterDistinto(char s[]);

void main()
{
    char s[30] = "piramide";

    printf("%d", caracterDistinto(s));
}

int caracterDistinto(char s[])
{
    char auxString[30] = "";
    int i, j, cont = 0, achou;

    for(i = 0; s[i] != '\0'; i++)
    {
        achou = 0;
        for(j = 0; auxString[j] != '\0'; j++)
        {
            if(s[i] == auxString[j])
            {
                achou = 1;
                break;
            }
        }

        if (achou == 0)
        {
            auxString[cont] = s[i];
            cont++;
            auxString[cont] = '\0';
        }
        
    }
    return cont;
}