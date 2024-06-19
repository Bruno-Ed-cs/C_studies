#include<stdio.h>

int main()
{
    int x, y, equ, range = 10000;
    
    for (x = 0; x < range; x++){
    
        for (y = 0; y < range; y++){
            
            equ = x + x + ((y * 10) + x);
            
            if (x != y && x != 0 && y != 0){
            
                if (equ == ((x * 10) + y)) printf("é valido com x = %d, y = %d\n", x, y);
            }
        }
        
    }
    
    return 0;
}