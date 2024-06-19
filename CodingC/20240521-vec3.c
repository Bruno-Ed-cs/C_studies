#include<stdio.h>

int main()
{
    int num[5], j;
    j = 0;
    
    for (int i = 4; i >= 0; i--){
    
        j++;
        inicio : printf("Insira o %do numero:\n", j);
        scanf("%d", &num[i]);
        
    }
    
    for (int i = 0; i < 5; i++) printf("%d \n", num[i]);
    
    return 0;
}