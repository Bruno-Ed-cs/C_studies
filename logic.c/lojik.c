#include<stdio.h>

int main()
{

    int x =1, y =1, equ;
    
    for (;x < 100; x++){
        
        for (y = 1;y < 100; y++){
        
            equ = x + x + (x * y);
            printf("x = %d, y = %d\n", x, y);
        
            if (equ == (x * y)) printf("sucesso, x = %d, y = %d\n", x, y);
            }
            
        }
    printf("Hello world!");
    return 0;
}
