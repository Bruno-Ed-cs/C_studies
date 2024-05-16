#include <stdio.h>

int main(){

    int start, end, pointer, hours;

    scanf("%d %d", &start, &end);
    /**
    pointer = start;
    hours = 0;

    if (start == end){

        hours = 24;
    } else {

        while (pointer != end) {

            if (pointer >= 24) pointer = 0;

            pointer += 1;
            hours += 1;
        }
    }
**/
    if (start == end){

        hours = 24;
    } else{
        hours = (end - start + 24) % 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", hours);

    return 0;

}
