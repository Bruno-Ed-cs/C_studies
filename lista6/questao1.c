#include <stdio.h>
#include <stdbool.h>

#define LEN 3

int main(){

    int numbers[LEN], sorted[LEN], buffer = 0, ordenadas;
    bool running = true;

    for (int i = 0; i < LEN; i++){

        scanf("%d", &numbers[i]);
        sorted[i] = numbers[i];
    }

    while (running) {


        for (int i = 0; i < LEN -1; i++){

            if (sorted[i] > sorted[i+1]) {
                buffer = sorted[i];
                sorted[i] = sorted[i+1];
                sorted[i+1] = buffer;
            }

        }

        ordenadas = 0;

        for (int i = 0; i < LEN -1; i++){

            if (sorted[i] <= sorted[i+1]) {
                ordenadas++;
            }

        }

        if (ordenadas >= LEN -1) running = false;

    }

    for (int i = 0; i < LEN; i++) printf("%d\n", sorted[i]);
    printf("\n");
    for (int i = 0; i < LEN; i++) printf("%d\n", numbers[i]);

    return 0;

}
