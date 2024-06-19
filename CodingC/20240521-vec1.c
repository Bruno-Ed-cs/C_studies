#include<stdio.h>

int main()
{
    double num[5];
    double maior = 0;
    
    for (int i = 0; i < 5; i++){
    
        inicio : printf("Insira a %da nota\n", i +1);
        scanf("%lf", &num[i]);
        
        if (num[i] < 0){
            
            printf("Valor negativo não permitido\n");
            goto inicio;
        
        }
        
        
        if (num[i] > maior) maior = num[i];
    }
    
    /**
    for (int i = 0; i < 5; i++){
    
        for (int j = i + 1; j < 5; j++){
            
            if (num[i] > num[j] && num[i] > num[maior]) maior = i;
        
        }
        
    }**/
    
    printf("A maior nota é %.2lf\n", maior);
    
    return 0;
}