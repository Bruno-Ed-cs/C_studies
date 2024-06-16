#include <stdio.h>

int main()
{
    int n = 0, m = 0;

    printf("Insira a largura da matriz:\n");
    scanf("%d", &n);

    printf("Insira a altura da matriz:\n");
    scanf("%d", &m);

    int mat1[m][n], mat2[n][m];

    for (int y = 0; y < m; y++)
    {

        for (int x = 0; x < n; x++) {
            printf("Insira a o elemento [%d][%d] da matriz:\n", x, y);
            scanf("%d", &mat1[y][x]);


        }
    }

    for (int y = 0; y < n; y++)
    {

        for (int x = 0; x < m; x++) {

            mat2[y][x] = mat1[x][y];
            printf("%d ", mat2[y][x]);
        }
        printf("\n");
    }



    return 0;
}
