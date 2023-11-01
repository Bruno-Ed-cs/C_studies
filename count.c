#include <stdio.h>
#include <stdbool.h>

int main(){
    int n = 0;
    while(n < 120){

        (n % 2 != 0) ? printf("%i é ímpar\n", n) : printf("%i é par\n", n);
        n++;
    }

}