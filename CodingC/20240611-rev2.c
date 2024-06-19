#include<stdio.h>
#include<math.h>

int main()
{
    
    int matrix[2][2], maior = -1 * (pow(2, sizeof(int) * 8)), menor = (pow(2, sizeof(int) * 8)), qtd_pos = 0;
    double sum = 0;
    
    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 2; x++)
        {
            scanf("%d", &matrix[y][x]);
            if (matrix[y][x] < menor) menor = matrix[y][x];
            
            if (matrix[y][x] > 0) qtd_pos++;
            
            if(x == y) sum+= matrix[y][x];
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        if (matrix[i][1] > maior) maior = matrix[i][1];
    }
    
    printf("media da diagonal principal = %.2lf\n", (sum / 2.0f));
    printf("O maior numero da coluna 2 = %d\n", maior);
    printf("o menor valor da matriz = %d\n", menor);
    printf("a quantidade de positivos = %d\n", qtd_pos);
    
    
    return 0;
}