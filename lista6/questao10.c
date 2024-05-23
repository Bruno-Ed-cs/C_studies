#include <stdio.h>

int main(){

    int vec[15], par[5], imp[5], qtdPar = 0, qtdImp = 0;

    for (int i = 0; i < 15; i++) scanf("%d", &vec[i]);

    for (int i = 0; i < 15; i++){

        if (qtdPar >= 5){

            qtdPar = 0;
            for(int i = 0; i < 5; i++) printf("par[%d] = %d\n", i, par[i]);
        }

        if (qtdImp >= 5){

            qtdImp = 0;
            for(int i = 0; i < 5; i++) printf("impar[%d] = %d\n", i, imp[i]);
        }

        if (vec[i] % 2 == 0){

            par[qtdPar] = vec[i];
            qtdPar++;
        } else {

            imp[qtdImp] = vec[i];
            qtdImp++;
        }




    }
    for(int i = 0; i < qtdImp; i++) printf("impar[%d] = %d\n", i, imp[i]);
    for(int i = 0; i < qtdPar; i++) printf("par[%d] = %d\n", i, par[i]);

    return 0;
}
