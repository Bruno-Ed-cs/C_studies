#include <stdio.h>
#include <stdbool.h>


int main()
{
    int n = 0;
    bool simetrica = true;

    printf("Insira o tamanho da matriz quadrada:\n");
    scanf("%d", &n);

    int mat[n][n];

    for (int y = 0; y < n; y++)
    {

        for (int x = 0; x < n; x++) {
            printf("Insira a o elemento [%d][%d] da matriz:\n", x, y);
            scanf("%d", &mat[y][x]);


        }
    }

    for (int y = 0; y < n; y++)
    {

        for (int x = 0; x < n; x++) {

            if (mat[y][x] != mat[x][y]) simetrica = false;

        }
    }


    simetrica ? printf("É simétrica\n") : printf("Não é simétrica\n");

    return 0;
}
