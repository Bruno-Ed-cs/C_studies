#include <stdio.h>
#include <stdbool.h>

int main()
{
    double sum = 0, value, i = 0, neg = 0, pos = 0;
    bool running = true;

    while (running)
    {

        printf("deseja adicionar mais um valor a média?\nCaso não insira um número nulo\n");
        scanf("%lf", &value);

        if (value == 0) 
        {
            running = false;

        } else {

            sum += value;
            i++;

            (value < 0) ? neg++ : pos++;
        }


    }

    printf("Média = %.2lf\nQuantidade de positivos = %.0lf\nQuantidade de negativos = %.0lf\n", sum / i, pos, neg);
    printf("%.2lf%% de valores positivos\n", (pos * 100) / i);
    printf("%.2lf%% de valores negativos\n", (neg * 100) / i);

    return 0;
}
