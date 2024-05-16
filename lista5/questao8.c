#include <stdio.h>

int main(){

    int input, factorial = 1, i = 0;

    scanf("%d", &input);

    for (i = 0; i < input; i++){

        factorial *= input - i;
    }

    printf("%d\n", factorial);

    return 0;
}
