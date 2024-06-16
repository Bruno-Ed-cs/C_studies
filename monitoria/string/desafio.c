#include <stdbool.h>
#include <string.h>
#include <stdio.h>

int main(){

	bool palindromo = true;

	char strin[100], reverse[100];

	printf("Insira seu possível palíndromo\n");

	fgets(strin, 100, stdin);

	strin[strlen(strin) - 1] = '\0';

	for (int i = 0; i < strlen(strin); i++){
	
		if (strin[i] == ' '){

			int j = i;
			for (; j < strlen(strin) -1; j++) strin[j] = strin[j +1];

			strin[j] = '\0';
			
		}
	}

//	printf("%s\n", strin);
	
	int len = strlen(strin) -1;

	for (int i = 0; i < strlen(strin); i++, len--){

		if (strin[i] != strin[len]) {

			palindromo = false;
			break;
		}

	}

	palindromo ? printf("É um palíndromo\n") : printf("Não é um palíndromo\n");

	return 0;
}
