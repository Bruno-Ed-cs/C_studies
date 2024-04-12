#include <stdio.h>

#define PESO1 3.5
#define PESO2 7.5

int main(){

    double A, B, MEDIA;

    scanf("%lf", &A);
    scanf("%lf", &B);

    MEDIA = (A * PESO1 + B * PESO2) / (PESO1 + PESO2);

    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
