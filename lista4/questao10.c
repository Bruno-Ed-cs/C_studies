#include <stdio.h>

int main(){

    double nota, sum, media, validas = 0;
    int mCriada = 0;

    while (!mCriada){

        scanf(" %lf", &nota);

        if (nota >= 0 && nota <=10){

            sum += nota;
            validas++;
        } else {

            printf("nota invalida\n");
            continue;
        }

        if (validas >= 2){

            media = sum / validas;
            mCriada = 1;
        }


    }

    printf("media = %.2lf\n", media);

    return 0;

}
