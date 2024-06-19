#include<stdio.h>

int main()
{
    double num = 0, qtd = 0, sum = 0, media;
    
    
    do{
    
        printf("Insira o %.0lfo numero pra a media\n", qtd + 1);
        scanf("%lf", &num);
        if (num >= 0) {
        
            sum += num;
        
            qtd++;
        }
    
    }while(num >= 0);
    
    media = sum / qtd;
    printf("Média = %.2lf\n", media);
    printf("Foi calculada a media de %.0lf numeros\n", qtd);
    return 0;
}