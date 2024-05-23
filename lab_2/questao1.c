#include <stdio.h>

int main(){

    int idade;

    for (int i = 0; i < 10; i++){

        printf("Insira a %dª idade\n", i+1);
        scanf("%d", &idade);

        if (idade < 16) {
            printf("Não é eleitor\n");
        } else if (idade > 18 && idade < 65) {
            printf("Eleitor obrigatório\n");
        } else if (idade >= 16 && idade < 18 || idade > 65 ) {
            printf("Eleitor Facultativo\n");
        }

    }

    return 0;
}
