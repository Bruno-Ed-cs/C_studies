#include<stdio.h>

int A, B, C, buffer1, buffer2;

int main()
{

    printf("A = "); scanf("%d", &A);
    printf("B = "); scanf("%d", &B);
    printf("C = "); scanf("%d", &C);
    
    if (A > B){
        buffer1 = A;
        buffer2 = B;
    
        A = buffer2;
        B = buffer1;
    
    }
    
    if (A > C){
        buffer1 = A;
        buffer2 = C;
        
        C = buffer1;
        A = buffer2;
    }
    
    if (B > C){
        buffer1 = B;
        buffer2 = C;
        
        C = buffer1;
        B = buffer2;
    }
    
    
    printf("A = %d, B = %d, C = %d\n", A, B, C);
    
    return 0;
}