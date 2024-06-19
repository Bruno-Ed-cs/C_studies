#include<stdio.h>

int main()
{
    double num[5];
    int maior = 0;
    
    for (int i = 0; i < 5; i++){
    
        printf("Insira a %da nota\n", i +1);
        scanf("%lf", &num[i]);
    }
    
    for (int i = 0; i < 5; i++){
    
        for (int j = i + 1; j < 5; j++){
            
            if (num[i] > num[j] && num[i] > num[maior]) maior = i;
        
        }
        
    }
    
    printf("A maior nota é %.2lf\n", num[maior]);
    
    return 0;
}