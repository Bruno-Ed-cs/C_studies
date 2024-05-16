#include <stdio.h>

int main(){

    int a, b, c, d, BbiggerC, DbiggerA, CsumD, AsumB, sumBigger, positive, par;

    BbiggerC = 0;
    DbiggerA = 0;
    sumBigger = 0;
    positive = 0;
    par = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (b > c) BbiggerC = 1;
    if (d > a) DbiggerA = 1;

    CsumD = c + d;
    AsumB = a + b;

    if (CsumD > AsumB) sumBigger = 1;

    if (c > 0 && d > 0) positive = 1;

    if ((a % 2) == 0) par = 1;

    if (BbiggerC && DbiggerA && sumBigger && positive && par){

        printf("Valores aceitos\n");

    } else {
    
        printf("Valores nao aceitos\n");
    }

    return 0;

}
