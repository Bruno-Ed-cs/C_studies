#include<stdio.h>


int main()
{
    
    int x, y;
    char opt;

    printf("Que operação deseja realizar?\nSoma = s\nMultiplicação = m\n");
    scanf("%c", &opt);
    
    printf("X = ");scanf("%d", &x);
    printf("Y = ");scanf("%d", &y);
    
    switch(opt){
    
        case 's':
            printf("Resultado = %d\n", x + y);
            break;
            
        case 'm':
            printf("Resultado = %d\n", x * y);
            break;
            
        default:
            printf("Opção inválida");
            break;
    }
    
    return 0;
}