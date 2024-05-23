#include <stdio.h>

int main(){

    int multipliyer, product = 0;

    printf("Insira o numero para retornar a tabuada até 10:\n");
    scan : scanf("%d", &multipliyer);

    if (multipliyer > 10 || multipliyer < 0) {
    
        printf("Valor inválido\nInsira um valor até 10 e positivo:\n");
        goto scan;
    }

    for (int i = 1; i <= 10; i++){

        printf("%d x %d = %d\n", multipliyer, i, (multipliyer * i));
        printf("%d + %d = %d\n", multipliyer, i, (multipliyer + i));

    }

    return 0;
}
