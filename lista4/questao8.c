#include <stdio.h>
 
int main() {
 
    int i = 1, j = 60;
    
    while (j > 0){
        
        j = 60 - 5 * ((i-1) / 3);
        
        if ((i - 1 )% 3 == 0) printf("I=%d J=%d\n", i, j);
        
        i++;
        
    }
    
 
    return 0;
}
