#include "stdio.h"

char numbers[1000];
char c;
int i, result = 0;

int convert(char s[]);

int main(int argc, char* argv[]){


    printf("Insira os números para decidir se são pares: ");

    while ((c = getchar()) != '\n') {

       numbers[i] = c;
        
        i++;
    }

    printf("%s\n", numbers);
    result = convert(numbers);
    printf("%d\n", result);

/**
    for (int i = 0; i <= sizeof(numbers); i++){

        printf("%d ", numbers[i]);
    } 
**/
    if (result % 2 != 0){
        
        printf("ímpar\n");
    } else{

        printf("par\n");
    }
    printf("%d", sizeof(int));
};

int convert(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}; 

