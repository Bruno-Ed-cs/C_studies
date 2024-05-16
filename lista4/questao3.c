#include <stdio.h>

int main(){

    int num = 1, i = 0;
    scanf("%d", &num);

    while (i <= num){

        if (i % 2 != 0) printf("%d\n", i);
        i++;
    }

    return 0;
}
