#include <stdio.h>

double fahrenheight, celcius;

int main(void)
{
    printf("Insira a temperatura em Celcius:\n"); scanf("%lf", &celcius);

    fahrenheight = (9 * celcius + 160) / 5;

    printf("Temperatura em Fahrenheit....... %.2lf ºF\n", fahrenheight);

    return 0;
}
