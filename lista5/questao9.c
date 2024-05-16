#include <stdio.h>

int main(){

    double i = 0, idade, qtd, media = 0;

    while (1) {

        scanf("%lf", &idade);

        if (idade < 0) {
            break;
        }

        media += idade;
        qtd++;
    
    }

    media /= qtd;

    printf("%.2lf\n", media);

    return 0;
}
