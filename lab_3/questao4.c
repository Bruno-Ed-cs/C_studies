#include <stdio.h>

int main()
{
    double qtd = 0, sumSal = 0, sumSon = 0, maiorSal = 0, salario, son, poor = 0;

    while (1) 
    {

        printf("insira o numero de filhos e o salario [sons sal]\n");
        scanf("%lf %lf", &son, &salario);

        if (salario < 0) break;

        sumSal += salario;
        sumSon += son;

        qtd++;

        if (salario <= 1300) poor++;

        if (salario > maiorSal) maiorSal = salario;
    }

    printf("Média de salário = %.2lf\n", sumSal / qtd);
    printf("Média de filhos = %.2lf\n", sumSon / qtd);
    printf("Maior salário = %.2lf\n", maiorSal);
    printf("Percentual de pessoas que recebem menos de R$ 1300 = %.2lf %%\n", ((poor * 100) / qtd));

    return 0;
}
