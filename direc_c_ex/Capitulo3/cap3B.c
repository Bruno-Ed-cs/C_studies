#include <stdio.h>

double dt, mVelocity, distance, dLiters, kmPl;


int main()
{

    printf("Insira a velocidade média (Em km/h): \n"); scanf("%lf", &mVelocity);
    printf("Insira O tempo gasto (Em horas): \n"); scanf("%lf", &dt);

    kmPl = 12;
    distance = dt * mVelocity;
    dLiters = distance / kmPl;

    printf("Velocide média..............%.2lf km/h\n", mVelocity);
    printf("Tempo Gasto.................%.2lf h\n", dt);
    printf("Distância percorrida........%.2lf km\n", distance);
    printf("Gasolina gasta..............%.2lf l\n", dLiters);




    return 0; 
}
