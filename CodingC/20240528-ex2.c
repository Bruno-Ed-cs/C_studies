#include<stdio.h>

int main()
{
    double notas[3][3], media;
    
    for (int aluno = 0; aluno < 3; aluno++){
    
        for (int nota = 0; nota < 3; nota++){
        
            printf("Insira a %da nota do %do aluno(a)\n", aluno +1, nota +1);
            scanf("%lf", &notas[aluno][nota]);
            
        }
    }
    

    for (int i = 0; i < 3; i++){
    
        media = (notas[i][0] + notas[i][1] + notas[i][2]) / 3;
        
        printf("Média do %do aluno(a): %.2lf\n", i +1, media);
    }
    
    
    return 0;
}