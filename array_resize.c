#include "stdio.h"

int numbers;

int main(int argc, char* argv[]){


    printf("Insira os números para decidir se são pares: ");
    scanf("%d\n", &numbers);
/**
    for (int i = 0; i <= sizeof(numbers); i++){

        printf("%d ", numbers[i]);
    } 
**/
    if (numbers % 2 != 0){
        
        printf("ímpar\n");
    } else{

        printf("par\n");
    }
};



