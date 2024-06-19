#include<stdio.h>

void ParPos(){

    int number;
    printf("Insira o numero: "); scanf("%d", &number);
    
    if ((number % 2) == 0){
        printf("O numero é par e ");
    } else{
        printf("O numero é ímpar e ");
    }
    
    if (number < 0){
        printf("negativo\n");
    } else{
        printf("positivo\n");
    }
    
    
}

void Menor(){

    int a, b, c;
    printf("Insira A: "); scanf("%d", &a);
    printf("Insira B: "); scanf("%d", &b);
    printf("Insira C: "); scanf("%d", &c);
    
    if (a < b && a < c){
        printf("A é o menor\n");
    } else if (b < a && b < c){
        printf("B é o menor\n");
    } else {
        printf("C é o menor\n");
    }
}

void Vogal(){
    
    char c;
    printf("Insira a letra:"); 
    scanf(" %c", &c);
    
    switch(c){
        case 'a':
        case 'A':
            printf("É vogal\n");
            break;
            
        case 'e':
        case 'E':
            printf("É vogal\n");
            break;
            
        case 'i':
        case 'I':
            printf("É vogal\n");
            break;
            
        case 'o':
        case 'O':
            printf("É vogal\n");
            break;
            
        case 'u':
        case 'U':
            printf("É vogal\n");
            break;
            
        default:
            printf("Não é vogal\n");
            break;
    }

}

void Media(){

    double a, b;
    
    printf("Insora os valores para a média:\n");
    printf("Insira A: "); scanf("%lf", &a);
    printf("Insira B: "); scanf("%lf", &b);
    
    printf("Média = %.2lf", (a + b) / 2 );

}

/**

5- indoque 3 exemplos de variaveis dos tipos de dados a seguir

a) int
6, 78, 99

b) float
7.8, 90.10, 166.1

c) char
g, i, n

**/

int main()
{
    int opt;
    printf("Escolha qual programa rodar\n1 = Par e positivo\n2 = Menor\n3 = Vogal\n4 = Media 2\n");
    scanf("%d", &opt);
    
    switch (opt){
    
    case 1:
        ParPos();
        break;
        
    case 2:
        Menor();
        break;
    
    case 3:
        Vogal();
        break;
        
    case 4:
        Media();
        break;
    
    default:
        printf("Opção inválida");
    
    }
    
    return 0;
}