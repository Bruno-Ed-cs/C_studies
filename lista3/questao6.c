#include <stdio.h>


double PerOf(double number, double percent){

    double result;

    result = (number * percent) / 100;

    return result;

};

void main(){

    double salario, imposto;

    scanf("%lf", &salario);

    if (salario > 2000 && salario <= 3000){

        imposto = PerOf((salario - 2000), 8);
        printf("R$ %.2lf\n", imposto);

    } else if (salario > 3000 && salario <= 4000) {

        imposto = PerOf((salario - 3000), 18) + PerOf(1000, 8);
        printf("R$ %.2lf\n", imposto);
    
    } else if (salario > 4000) {

        imposto = PerOf((salario - 4500), 28) + PerOf(1500, 18) + PerOf(1000, 8);
        printf("R$ %.2lf\n", imposto);
    
    } else {
    
        printf("Isento\n");
    }


}


