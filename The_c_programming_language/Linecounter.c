#include <stdio.h>


int main(void)
{

    long nw, blk, tab, c, prev;
    nw = 0;
    blk = 0;
    tab = 0;
    prev = 0;

    while ((c = getchar()) != EOF) {

       /*switch for the charactr counters*/ 
        switch (c) {
            case '\n':
                ++nw;
            break;
            
            case ' ':
                ++blk;
            break;

            case '\t':
                ++tab;
            break;
        }


        /*Switch for the input formmating*/
        switch (c) {
            
            case '\\':
                putchar('\\');
                putchar('\\');
                break;

            case '\t':
                putchar('\\');
                putchar('t');
                break;

            case '\b':
                putchar('\\');
                putchar('b');
                break;

            case ' ':
                if (prev == ' ') break;

            default:
                putchar(c);
        }

        prev = c;
    }

    printf("new lines: %ld\nspaces: %ld\ntabs: %ld\n", nw, blk, tab);

    return 0;
}
