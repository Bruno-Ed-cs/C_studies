#include <stdio.h>

int main(){
    
    int dinheiro, resto, notas;
	
    int cedualas[7] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &dinheiro);
    printf("%d\n", dinheiro);

	
	for (int i = 0; i < 7; i++){
		
		notas = dinheiro / cedualas[i];
		resto = dinheiro % cedualas[i];
		dinheiro = resto;

		printf("%d nota(s) de R$ %d,00\n", notas, cedualas[i]);

	}

	/**
    if (dinheiro >= 100){
        notas = dinheiro / 100;
        resto = dinheiro % 100;
        dinheiro = resto;

        printf("%d nota(s) de R$ 100,00\n", notas);
    } else printf("0 nota(s) de R$ 100,00\n"); 

    if (dinheiro >= 50){
        notas = dinheiro / 50;
        resto = dinheiro % 50;
        dinheiro = resto;

        printf("%d nota(s) de R$ 50,00\n", notas);
    } else printf("0 nota(s) de R$ 50,00\n");

    if (dinheiro >= 20){
        notas = dinheiro / 20;
        resto = dinheiro % 20;
        dinheiro = resto;

        printf("%d nota(s) de R$ 20,00\n", notas);
    } else printf("0 nota(s) de R$ 20,00\n");

    if (dinheiro >= 10){
        notas = dinheiro / 10;
        resto = dinheiro % 10;
        dinheiro = resto;

        printf("%d nota(s) de R$ 10,00\n", notas);
    } else printf("0 nota(s) de R$ 10,00\n");

    if (dinheiro >= 5){
        notas = dinheiro / 5;
        resto = dinheiro % 5;
        dinheiro = resto;

        printf("%d nota(s) de R$ 5,00\n", notas);
    } else printf("0 nota(s) de R$ 5,00\n");

    if (dinheiro >= 2){
        notas = dinheiro / 2;
        resto = dinheiro % 2;
        dinheiro = resto;

        printf("%d nota(s) de R$ 2,00\n", notas);
    } else printf("0 nota(s) de R$ 2,00\n");

    if (dinheiro >= 1){
        notas = dinheiro / 1;
        resto = dinheiro % 1;
        dinheiro = resto;

        printf("%d nota(s) de R$ 1,00\n", notas);
    } else printf("0 nota(s) de R$ 1,00\n");
	**/
    return 0;
}
