#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(){

	char strin1[100], strin2[100];

	bool equal = true;

	printf("Insira a 1ª string:\n");

	fgets(strin1, 100, stdin);

	printf("Insira a 2ª sting:\n");

	fgets(strin2, 100, stdin);

	for (int i = 0; i < strlen(strin1); i++){

		if (strin1[i] != strin2[i]){
			
			equal = false;
			break;
		}

	}

	equal ? printf("São inguais\n") : printf("son dinferentis\n");

	return 0;
}
