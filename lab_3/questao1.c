#include <stdio.h>

int main()
{
    int qtd = 1;
    double value;

    printf("Insira o valor por xerox:\n");
    scanf("%lf", &value);

    for (; qtd <= 200; ++qtd) {

        printf("Por %d xeroz sai por R$ %.2lf\n", qtd, (value * qtd));
    }

    return 0;
}
