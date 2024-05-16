#include <stdio.h>

int main(){

    int input, dias, meses, anos, buffer1, buffer2;

    scanf("%d", &input);

    anos = input / 365;

    buffer1 = input % 365;

    buffer2 = buffer1 % 30;

    meses = buffer1 / 30;
    
    dias = buffer2 % 30;


    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;

}
