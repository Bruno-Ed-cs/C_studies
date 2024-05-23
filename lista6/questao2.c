#include <stdio.h>

int main(){

    int runs, qtd, start, sum, num, iteration = 0;

    scanf("%d", &runs);

    for (int i = 0; i < runs; i++){

        scanf("%d %d", &start, &qtd);
        iteration = 0;
        num = start;
        sum = 0;

        while (iteration < qtd) {

            if (num % 2 != 0){
                sum += num; 
                iteration++;
            }

            num++;
        } 
        printf("%d\n", sum);


    }

    return 0;
}
