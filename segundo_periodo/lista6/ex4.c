#include<stdio.h>

void removeString(char s[], char c);

void main()
{
    char s[30] = "paralelepipedo";
    char n = 'e';
    
    removeString(s, n);
    
    printf("%s", s);
}

void removeString(char s[], char c)
{
    int i, j;
    
    for(i = 0; s[i]!='\0'; i++)
    {
        if(s[i] == c)
        {
            for(j = i; s[j]!='\0';j++)
            {
                s[j] = s[j + 1];
            }
            i--;
        }
    }
}
