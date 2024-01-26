#include <stdio.h>

int main(){

    char letter;
    char text[500];
    int i;
/**
    while ((letter = getchar()) != EOF) {

        printf("%c\n", letter);
    }
**/
    for (i = 0; (letter = getchar())!=EOF ; i++) {
        printf("%d, %c\n", i, letter);
        text[i] = letter;
    }

    char last = text[-1];

    printf("%d, %s", i, text);

    return 0;
}
