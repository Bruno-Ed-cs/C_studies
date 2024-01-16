#include <stdio.h>

int A, B, oA, oB;

int main(void)
{
    printf("A = "); scanf("%d", &A); 
    printf("B = "); scanf("%d", &B); 

    oA = A;
    oB = B;

    B = oA;
    A = oB;

    printf("A foi de %d para %d\nB foi de %d para %d\n", oA, A, oB, B);


    return 0;
}
