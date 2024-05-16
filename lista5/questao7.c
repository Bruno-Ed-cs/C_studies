#include <stdio.h>

int main(){
    
    int digits = 0, i = 1, end; 

    scanf("%d %d", &digits, &end);

    while (i <= end) {
        
        printf("%d", i);
        
        if(i % digits == 0){
            printf("\n");
        } else{
            printf(" ");
        }
        i++;

    }
    return 0;
}
