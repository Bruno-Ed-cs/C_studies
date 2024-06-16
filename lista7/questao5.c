#include <stdio.h>

int main()
{
    double matriz[12][12], soma = 0;
    char opt;
    int linha;

    scanf("%d", &linha);
    getchar();
    scanf("%c", &opt);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++) 
        {
            scanf("%lf", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 12; i++) {

        soma += matriz[linha][i];

    }

    if (opt == 'S') {

        printf("%.1lf\n", soma);
    } else if (opt == 'M') {

        printf("%.1lf\n", soma / 12);

    }

    return 0;
}
