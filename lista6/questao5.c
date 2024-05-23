#include <stdio.h>

int main(){

    int num[10], input, product;

    scanf("%d", &input);
    num[0] = input;

    for (int i = 1; i < 10; i++){

        num[i] = num[i-1] * 2;
        
    }
    
    for (int i = 0; i < 10; i++) printf("N[%d] = %d\n", i, num[i]);

    return 0;
}
