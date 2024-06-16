#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    char nome[50];
    double salario, vendas;

    fgets(nome, 50, stdin);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    printf("TOTAL = R$ %.2lf\n", salario + (vendas * 0.15f));

    return 0;
}
