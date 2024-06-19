#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int vec[15], maior = 0, menor = 0, sump = 0, sumi = 0, qtd_p = 0, qtd_i = 0;
    srand(time(NULL));
    
    for (int i = 0; i < 15; i++)
    {
       // scanf("%d", &vec[i]);
       
       vec[i] = rand() % 101;
       printf("%d\n", vec[i]);
        
        if (vec[i] >= maior) maior = vec[i];
        if (vec[i] <= maior) menor = vec[i];
        
        
        ((i % 2) == 0) ? (sump += vec[i]) : (sumi += vec[i]);
    }
    
    for (int i = 0; i < 15; i++)
    {
        if (vec[i] < menor) menor = vec[i];
        
        if((i % 2) == 0)
        {
            qtd_p++;
        } else
        {
            qtd_i++;
        }
        
    }
    
    printf("Maior = %d\nMenor = %d\nMedia dos pares = %.2lf\nMedia dos impares = %.2lf\n", maior, menor, ((double)sump / (double)qtd_p), ((double)sumi / (double)qtd_i));
    return 0;
}