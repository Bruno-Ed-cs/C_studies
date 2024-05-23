#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int num;
    bool primo = true;

    printf("Insira o número para verificar se é primo:\n");

    input : scanf("%d", &num);

    if (num < 0) {

        printf("Valor inválido\nInsira um valor positivo:\n");
        goto input;
    }

    for (int i = 2; i <= sqrt(num); i++){

        if (num % i == 0){
            
            primo = false;
            break;
        } 
        
    } 

    primo ? printf("É primo\n") : printf("Não é primo\n");



    return 0;
}
