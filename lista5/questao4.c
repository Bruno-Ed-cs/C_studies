#include <stdio.h>

int main(){

    double qtd, x, y;

    scanf("%lf", &qtd);

    for(int i = 0; i < qtd; i++){

        scanf("%lf %lf", &x, &y);

        if (y == 0){
            printf("divisao impossivel\n");
        } else {
            printf("%.1lf\n", x / y);
        }
    }

    return 0;
}
