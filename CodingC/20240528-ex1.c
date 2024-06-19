#include<stdio.h>

int main()
{
    double notas[9], media[3], sum;
    int nota = 0, aluno = 1;
    
    for (int i = 0; i < 9; i++){
    
        nota++;
    
        printf("Insira a %da nota do %d aluno:\n", nota , aluno);
        scanf("%lf", &notas[i]);
        
        sum += notas[i];
        
        if (((i +1) % 3) == 0) {
            media[aluno - 1] = sum / 3;
            sum = 0;
            nota = 0;
            aluno++;
        }
    }
    
    for (int k = 0; k < 3; k++){
    
     printf("A média do %do aluno(a) é = %.2lf\n", k +1, media[k]);
    }
    return 0;
}