#include <stdio.h>

int main(void)
{
    int c;
    printf("%d\n", EOF);
    putchar(EOF);

    while ((c = getchar()) != EOF){

        putchar(c);
        
        if (c != EOF){
           printf("True\n");
        } else {
            printf("False\n");
        }
    }
    return 0;
}
