#include <stdio.h>

int main(){

    int sum = 0, num = 1, qtd = 0;

    while (num != 0){

        scanf("%d", &num);

        if (num == 0) continue;

        qtd = 0;
        sum = 0;

        while (qtd < 5){

            if (num % 2 == 0) {
                sum += num;
                qtd++;
            }

            num++;
        }

        printf("%d\n", sum);

    }

    return 0;
}
