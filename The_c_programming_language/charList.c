#include <stdio.h>

int main(int argc, char* argv[]){

    int arg, i, charValue;
    arg = 1;

    if (argv[1] == NULL){
        printf("No arguments\n");
        return 1;
    } 

    while (arg < argc){
        for (i = 0; argv[arg][i] != '\0'; i++){

            charValue = argv[arg][i];

            printf("%c = %d\n", argv[arg][i], charValue);

        }
        printf("\n");

        arg++;
    }
    return 0;
}
