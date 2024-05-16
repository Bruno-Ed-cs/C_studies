/**
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem


Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal.
a < b + c 
b < a + c 
c < a + b

perimetro = a + b + c 
area = (c / 2) * (a + b)
**/

#include <stdio.h>

int main(void)
{
    double a, b, c, resultado;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a < (b + c) && b < (a + c) && c < (a + b)){
        
        resultado = a + b + c;

        printf("Perimetro = %.1lf\n", resultado);

    } else {
    
        resultado = (c / 2) * (a + b);

        printf("Area = %.1lf\n", resultado);
    }


    return 0;
}
