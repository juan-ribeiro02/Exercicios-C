#include<stdio.h>

float celsiusParaFahrenheit(float celsius)
{
    float fahrenheit;

    fahrenheit = (celsius * 9/5) + 32;

    return fahrenheit;
}

void main()
{
    printf("%.2f", celsiusParaFahrenheit(50));
}