#include <stdio.h>

int main(){

    int num = 1, imp = 0;
    scanf("%d", &num);

    while (imp < 6){

        if (num % 2 != 0) {

            printf("%d\n", num);

            imp++;
        }
        num++;
    }

    return 0;
}
