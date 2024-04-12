#include <stdio.h>

int main(){
    
    int id1, id2, qtd1, qtd2;
    double value1, value2, total;

    scanf("%d %d %lf", &id1, &qtd1, &value1);
    scanf("%d %d %lf", &id2, &qtd2, &value2);

    total = qtd1 * value1 + qtd2 * value2;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
