#include <stdio.h>

int main(){

    int num = 1, i = 1;
    scanf("%d", &num);

    while (i <= num){

        if (i % 2 == 0) printf("%d^2 = %d\n",i , i * i);
        i++;
    }

    return 0;
}
