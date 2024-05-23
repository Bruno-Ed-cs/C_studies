#include <stdio.h>

int main(){

    double vec[100];
    int qtd = 0, j = 0;

    for (int i = 0; i < 100; i++){

        scanf("%lf", &vec[i]);

        if (vec[i] <= 10) qtd++;

    }

    int less[qtd];

    if (qtd == 0) { 
        printf("No variable bellow or equal than 10.\n"); 
        return 0;
    }

    for (int i = 0; i < 100; i++){

        if (j >= qtd) break;
        
        if (vec[i] <= 10) {
            less[j] = i;
            j++;
        }

        
    }

    for (int i = 0; i < qtd; i++) printf("A[%d] = %.1lf\n", less[i], vec[less[i]]);


    return 0;
}
