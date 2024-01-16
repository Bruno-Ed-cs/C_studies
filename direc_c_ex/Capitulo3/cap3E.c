#include <stdio.h>
#include <math.h>

double volume, raio, haltura;

double const Pi = 3.14159;

int main(void)
{
    printf("Insira a altura da lata (em cm): \n"); scanf("%lf", &haltura);

    printf("Insira o raio da lata (em cm): \n"); scanf("%lf", &raio);
    
    volume = Pi * pow(raio, 2.0) * haltura;

    printf("Volume.............%.2lf cm3\n", volume);

    return 0;
}
