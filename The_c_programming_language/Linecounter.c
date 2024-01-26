#include <stdio.h>

long nw, blk, tab, c;

int main(void)
{

    nw = 0;
    blk = 0;
    tab = 0;

    while ((c = getchar()) != EOF) {

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

        switch (c) {
            

            default:
                putchar(c);
        }
    }

    printf("new lines: %ld\nspaces: %ld\ntabs: %ld\n", nw, blk, tab);

    return 0;
}
