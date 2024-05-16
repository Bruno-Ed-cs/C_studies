#include <stdio.h>

int main(){

    int a, b, i, buffer, sum;

    a = 1;
    b = 1;
    i = 0;
    sum = 0;

    while (1){

        scanf(" %d %d", &a, &b);
        if (a <= 0 || b <= 0) break;

        if (a > b){

            buffer = a;
            a = b;
            b = buffer;
        }

        i = a;
        sum = 0;

        while (i <= b){

           printf("%d ", i);
            sum += i;
            i++;

        }

        printf("Sum=%d\n", sum);

    }
    return 0;
}
