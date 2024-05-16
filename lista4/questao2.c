#include <stdio.h>

int main(){

    int num = 1, i = 0, par = 0;

    while (i < 5){

        scanf("%d", &num);
        if (num % 2 == 0) par++;
        i++;
    }

    printf("%d valores pares\n", par);

    return 0;
}
