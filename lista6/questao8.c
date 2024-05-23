#include <stdio.h>

int main(){

    int vec[1000], input, value = 0;

    scanf("%d", &input);

    for (int i = 0; i < 1000; i++) {
    
        vec[i] = value;
        value++;
        if (value >= input) value = 0;
        printf("N[%d] = %d\n", i, vec[i]);
    }

    return 0;
}
