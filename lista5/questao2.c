#include <stdio.h>

int main(){

    double qtd, input1, input2, input3, avg;

    scanf("%lf", &qtd);

    for(int i = 0; i < qtd; i++){

        scanf("%lf %lf %lf", &input1, &input2, &input3);

        avg = ((input1 * 2) + (input2 * 3) + (input3 * 5)) / 10;

        printf("%.1lf\n", avg);
    }

    return 0;

}
