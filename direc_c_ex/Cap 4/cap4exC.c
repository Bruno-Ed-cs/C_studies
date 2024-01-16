#include<stdio.h>
#include<math.h>

double n1, n2, n3, n4, media;

int main()
{

    printf("Nota 1 = "); scanf("%lf", &n1);
    printf("Nota 2 = "); scanf("%lf", &n2);
    printf("Nota 3 = "); scanf("%lf", &n3);
    printf("Nota 4 = "); scanf("%lf", &n4);
    
    media = (n1 + n2 + n3 + n4) / 4;
    
    printf("Média = %.2lf \n", media);
    
    if (media >= 5) {
        printf("Você foi aprovado = )\n");
    } else {
        printf("Você vai para a recuperação =( \n");
    }
    
    
    
    return 0;
}
