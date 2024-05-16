#include <stdio.h>

int main(){

    double i, valor, qtd = 0;

    for (i = 0; i < 6; i++){

        scanf("%lf", &valor);
        printf("valor recebido\n");

        if (valor > 0) {
            qtd++;
            printf("Positivo\n");
        } 


    }
    printf("%lf valores positivos", qtd);
    return 0;

}
