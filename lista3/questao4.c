/**
 0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Acima de 2000.00

15%
12%
10%
7%
4%

**/
#include <stdio.h>

double reajuste(double salario, double porcentagem){

    double reajuste;

    reajuste = (salario * porcentagem) / 100;

    return reajuste;

};

void printSal(double reajuste, double salario, double porcentagem){

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n", (salario + reajuste), reajuste, porcentagem);

};

int main(void)
{

    double salario, plus;

    scanf("%lf", &salario);

    if (salario <= 400){

        plus = reajuste(salario, 15);
        printSal(plus, salario, 15);

    } else if (salario > 400 && salario <= 800) {

        plus = reajuste(salario, 12);
        printSal(plus, salario, 12);

    } else if (salario > 800 && salario <= 1200) {

        plus = reajuste(salario, 10);
        printSal(plus, salario, 10);

    } else if (salario > 1200 && salario <= 2000) {

        plus = reajuste(salario, 7);
        printSal(plus, salario, 7);   

    } else if (salario > 2000) {

        plus = reajuste(salario, 4);
        printSal(plus, salario, 4);  
    }

    return 0;
}
