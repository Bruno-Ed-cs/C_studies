#include <stdio.h>

int main(){

    int testes, num, i, perfection = 0;

    scanf("%d", &testes);

    for (int j = 0; j < testes; j++) {
    
        scanf("%d", &num);

        for(i = 1; i < num ; i++){
            
            if (num % i == 0){

                perfection += i;
                //printf("%d, %d\n", i, perfection);
            }

        }

        if (perfection == num){
            printf("%d eh perfeito\n", num);
        } else {
            printf("%d nao eh perfeito\n", num);
        }

        perfection = 0;

    }

    return 0;
}
