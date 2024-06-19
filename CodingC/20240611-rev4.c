#include<stdio.h>
#include<string.h>

int main()
{
    char alunos[5][50];
    double notas[5][3];
    double medias[5];
    
    for (int y = 0; y < 5; y++)
    {
        printf("Insira o nome do %do aluno:\n", y+1);
        fgets(alunos[y], 50, stdin);
        
        if (strlen(alunos[y]) < 50)
        {
            alunos[y][strlen(alunos[y]) -1] = '\0';
        }
        
        
        for (int x = 0; x < 3; x++)
        {
            printf("insira a %da nota de %s:\n", x+1, alunos[y]);
            scanf("%lf", &notas[y][x]);
            getchar();
            
            medias[y] += notas[y][x];
            
        }
        
        medias[y] /= 3;
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("Situaçao de %s é:\n", alunos[i]);
        
        if (medias[i] >= 7) printf("Aprovado\n");
        else if (medias[i] < 7 && medias[i] > 5) printf("Recuperacao\n");
        else if (medias[i] < 7) printf("reprovado\n");
    }
    return 0;
}