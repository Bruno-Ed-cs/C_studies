#include <stdio.h>

double fahrenheight, celcius;

int main(void)
{
    printf("Insira a temperatura em Fahrenheit.:\n"); scanf("%lf", &fahrenheight);

    celcius = (fahrenheight - 32) * 5 / 9;

    printf("Temperatura em Celcius............ %.2lf ºC\n", celcius);

    return 0;
}
