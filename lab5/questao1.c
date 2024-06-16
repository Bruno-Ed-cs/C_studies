#include <stdio.h>

int main()
{
    int n = 0, sum = 0;

    printf("Insira o tamanho da matriz quadrada:\n");
    scanf("%d", &n);

    int mat[n][n];

    for (int y = 0; y < n; y++)
    {

        for (int x = 0; x < n; x++) {
            printf("Insira a o elemento [%d][%d] da matriz:\n", x, y);
            scanf("%d", &mat[y][x]);

            if (x == y) sum += mat[y][x];

        }
    }

    printf("Soma diagonal = %d\n", sum);

    return 0;
}
