#include <stdio.h>

#define PESO1 2
#define PESO2 3
#define PESO3 5

int main(){

    double A, B, C, MEDIA;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    MEDIA = (A * PESO1 + B * PESO2 + C * PESO3) / (PESO1 + PESO2 + PESO3);

    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
