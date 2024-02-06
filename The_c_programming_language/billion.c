#include <stdio.h>
#include <math.h>

int main (void){

    long counter = 0;

    while (counter <= pow(2, 32)){

        counter++;

        printf("%ld\n", counter);
    }


    return 0;

}
