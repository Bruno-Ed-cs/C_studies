#include <stdio.h>
#include <sys/ioctl.h>
#include <stdlib.h>

int main (){

    int i = 1;
    printf("█");
    struct winsize sz;
    ioctl( 0, TIOCGWINSZ, &sz );
    int limit = sz.ws_row * sz.ws_col;
    while (i == 1) {
        ioctl( 0, TIOCGWINSZ, &sz );
        printf("%d, %d\n", sz.ws_col, sz.ws_row);
        printf("\e[1;1H\e[2J");
    }
}
