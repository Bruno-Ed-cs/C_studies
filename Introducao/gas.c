#include <stdio.h>

#define CONSUME 12

int main(){

    int hours, velocity;
    double gas, distance;

    scanf("%d", &hours);
    scanf("%d", &velocity);

    distance = (double)velocity * (double)hours;
    gas = distance / CONSUME;

    printf("%.3lf\n", gas);

    return 0;
}
