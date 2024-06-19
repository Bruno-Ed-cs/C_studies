#include<stdio.h>

int main()
{
    int val[10];
    
    for (int i = 0; i < 10; i++){
    
        printf("Insira o %do valor:\n", i + 1);
        scanf("%d", &val[i]);
    
    }
    
    printf("Valores pares: ");
    for (int i = 0; i < 10; i++){
        (val[i] % 2 == 0) ? printf("%d ", val[i]) : printf("");
    }
    
    printf("\n");
    
    return 0;
}