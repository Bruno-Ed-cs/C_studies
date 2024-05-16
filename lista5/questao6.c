#include <stdio.h>

int main(){

    int alcool= 0 , gasolina= 0 , diesel = 0 , running = 1, opt;

    while (running) {
    
        scanf("%d", &opt);

        if(opt == 4){
            break;
        } else if (opt == 3) {
            diesel++;
        } else if (opt == 2) {
            gasolina++;
        } else if (opt == 1) {
            alcool++;
        } else {
            continue;
        }

    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);

    return 0;
}
