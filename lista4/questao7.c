#include <stdio.h>

int main(){

    int experimentos, tRatos = 0, tCoelhos = 0, tSapos = 0, i = 0, cobaias, total = 0;
    char tipo;

    scanf("%d", &experimentos);

    while (i < experimentos) {

        scanf(" %d %c", &cobaias, &tipo);

        switch (tipo) {

            case 'R':
                tRatos += cobaias;
                break;

            case 'S':
                tSapos += cobaias;
                break;

            case 'C':
                tCoelhos += cobaias;
                break;
        }

        total += cobaias;

        i++;
    }

    double pCoelhos, pRatos, pSapos;

    pCoelhos = ((double)tCoelhos * 100) / total;
    pSapos = ((double)tSapos * 100) / total;
    pRatos = ((double)tRatos * 100) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", tCoelhos);
    printf("Total de ratos: %d\n", tRatos);
    printf("Total de sapos: %d\n", tSapos);
    printf("Percentual de coelhos: %.2lf %%\n", pCoelhos);
    printf("Percentual de ratos: %.2lf %%\n", pRatos);
    printf("Percentual de sapos: %.2lf %%\n", pSapos);

    return 0;
}
