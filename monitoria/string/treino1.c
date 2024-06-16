#include <stdio.h>

int main(){

	int qtd = 0, i = 0, iname = 1;
	char nome[100];

	printf("Insira seu nome completo\n");

	fgets(nome, 100, stdin);

	while (nome[i] != '\0'){
		if (nome[i] == ' ' || nome[i + 1] == '\0'){

			printf("O %dº nome tem %d letras\n", iname, qtd);
			iname++;
			qtd = 0;

		} else {
		
			qtd++;

		}
		i++;
	
	} 

	return 0;
}
