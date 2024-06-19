#include<stdio.h>

int main()
{
    int num[5];
    for (int i = 0; i < 5; i++){
    
        printf("Insira o %do numero:\n", i + 1);
        scanf("%d", &num[i]);
        
    }
    
    printf("Numeros nos indices impares: ");
    for (int i = 0; i < 5; i++){
    
        (i % 2 != 0) ? printf("%d ", num[i]) : printf("");;
    }
    printf("\n");
    
    return 0;
}