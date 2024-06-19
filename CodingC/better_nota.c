#include <stdio.h>

int main(){

    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int resto, valor, qtd;
    
    printf("Insira o valor:"); scanf("%d", &valor);
    
    printf("%d\n", valor);
    
    for (int i = 0; i <= 7; i++){
    
        resto = valor % notas[i];
        qtd = valor / notas[i];
        
        printf("%d notas de %d,00 R$\n", qtd, notas[i]);
        
        valor = resto;
    }
    
    return 0;

}