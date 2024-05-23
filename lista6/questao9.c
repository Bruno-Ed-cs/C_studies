#include <stdio.h>

int main(){

    double vec[100];

    scanf("%lf", &vec[0]);


    for (int i = 1; i < 100; i++){

        vec[i] = vec[i -1] / 2;
    }

    for (int i = 0; i < 100; i++) printf("N[%d] = %.4lf\n", i, vec[i]);

    return 0;
}
