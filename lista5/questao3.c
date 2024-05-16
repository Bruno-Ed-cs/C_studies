#include <stdio.h>

int main(){

    int a, b, boll = 1;

    while (boll) {

        scanf("%d %d", &a, &b);
        if (a == b){
            boll = 0;
        }else if (a > b){
            printf("Decrescente\n");
        } else {
            printf("Crescente\n");
        }

    }

    return 0;

}
