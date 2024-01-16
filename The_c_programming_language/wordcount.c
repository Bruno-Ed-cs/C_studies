#include <complex.h>
#include <stdio.h>

#define IN 1
#define OUT 0 

int main(void)
{
    long c, wc;
    int word;

    wc = 0;
    word = OUT;

    while ((c = getchar()) != EOF){

        if (c == ' ' || c == '\t' || c == '\n'){
            word = OUT;

        } else if (word == OUT){

            word = IN;
            ++wc;

        }

    }

    printf("\nWords: %ld\n", wc);
    return 0;
}
