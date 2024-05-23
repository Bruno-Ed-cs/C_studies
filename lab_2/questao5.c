#include <stdio.h>

int main(){

    long unsigned int qtd, prev, num, next;

    printf("Quantos números de Fibonacci deseja exibir?\n");
    scanf("%lu", &qtd);

    prev = 0;
    num = 0;
    next = 1;

    for (int i = 0; i < qtd; i++){

        printf("%d | %lu\n", i + 1, next);
        prev = num;
        num = next;
        next = prev + num;
    }
    //limite = 93;
    return 0;
}
