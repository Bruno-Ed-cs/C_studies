#include<stdio.h>
#include<math.h>

double n1, n2, n3, n4, media, p_final;

int main()
{

    printf("Nota 1 = "); scanf("%lf", &n1);
    printf("Nota 2 = "); scanf("%lf", &n2);
    printf("Nota 3 = "); scanf("%lf", &n3);
    printf("Nota 4 = "); scanf("%lf", &n4);
    
    media = (n1 + n2 + n3 + n4) / 4;
    
    if (media < 7) {
        printf("O aluno irá para a prova final com a nota %.2lf\n", media);
        printf("Insira a nota da prova final: "); scanf("%lf", &p_final);
        
        media = media + p_final;
        
        if (media < 5) {
        
            printf("O aluno foi reprovado e irá repetir de ano com a nota %.2lf \n", media);
        } else {
        
            printf("O aluno foi aprovado com a nota %.2lf \n", media);
        }
        
    } else {
        printf("O aluno foi aprovado com a nota %.2lf \n", media);
    }
    
    
    
    return 0;
}