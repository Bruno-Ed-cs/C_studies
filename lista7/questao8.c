#include <stdio.h>
int main()
{
    double matriz[12][12], soma = 0, qtd = 0;
    char opt;


    scanf("%c", &opt);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {

            if ((i != j) && j < i)
            {
                soma += matriz[i][j];
                qtd++;
            }
        }
    }

    if (opt == 'S')
    {
        printf("%.1lf\n", soma);
    } else if (opt == 'M') 
    {
        printf("%.1lf\n", soma / qtd);
    
    }

    return 0;
}
