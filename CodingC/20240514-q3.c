#include<stdio.h>

int main()
{
    int num = 0, qtd = 0;
    
    do{
    
        printf("Insira um numero para verificar a divisibilidade por 3 e 5\n", qtd + 1);
        scanf("%d", &num);
        
        if (num % 3 == 0 && num % 5 == 0 && num != 0){
        
            qtd++;
        }
        
    
    }while(num != 0);
    
    printf("Quantidade de multiplos de 3 e 5 = %d\n", qtd);
    return 0;
}