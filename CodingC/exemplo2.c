#include <stdio.h>

#define PESO1 2
#define PESO2 3

int main(){

    double media, valor1, valor2;
    
    printf("Insira o primeiro valor:");
    scanf("%lf", &valor1);
    
    printf("Insira o segundo valor:");
    scanf("%lf", &valor2);

    media = (valor1 * PESO1 + valor2 * PESO2) / (PESO1 + PESO2);
    
    printf("O resultado e: %.2lf", media);
    
    return 0;
}