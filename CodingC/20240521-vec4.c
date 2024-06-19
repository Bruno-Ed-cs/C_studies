#include<stdio.h>

int main()
{
    double notas[10], media = 0, maiores = 0;
    
    for (int i = 0; i < 10; i++){
    
        printf("Insira a %da nota:\n", i + 1);
        scanf("%lf", &notas[i]);
        
        media += notas[i];
    
    }
    
    media /= 10;
    
    for (int i = 0; i < 10; i++){
        if (notas[i] > media) maiores++;
    }
    
    printf("Média = %.2lf\n%.0lf notas foram acima da média", media, maiores);
    
    return 0;
}