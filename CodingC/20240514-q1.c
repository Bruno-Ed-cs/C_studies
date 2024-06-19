#include<stdio.h>

int main()
{
    int y, x, sum;
    char opt = 'n';
    
    do{
    
        printf("Insira dois valores para a soma [x y]\n");
        scanf(" %d %d", &x, &y);
        
        sum = x + y;
        printf("soma = %d\n", sum);
        
        printf("Deseja realizar uma nova soma? [y, n]\n");
        scanf(" %c", &opt);
    
    }while(opt == 'y');
    return 0;
}