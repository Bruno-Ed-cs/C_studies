#include<stdio.h>

void sum(){

    int a, b, c;

    printf("A = "); scanf("%d", &a);
    printf("B = "); scanf("%d", &b);
    
    c = a + b;
    printf("Resultado = %d\n", c);
};

void mul(){

    int a, b, c;

    printf("A = "); scanf("%d", &a);
    printf("B = "); scanf("%d", &b);
    
    c = a * b;
    printf("Resultado = %d\n", c);
};

int main()
{

    int running = 1;
    
    while (running){
    
        int option;
    
        printf("Você quer\n 1 ) adicionar\n 2 ) multiplicar\n 3 ) sair\n");
        scanf("%d", &option);
        
        if (option == 1){
            sum();
        } else if (option == 2){
            mul();
        } else if (option == 3){
            running = 0;
        } else {
            printf("Opção inválida\n");;
        }
    }
    return 0;
}