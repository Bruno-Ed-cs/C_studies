#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

	const int lenStr = 100;

	int count2 = 0;

	char strin1[lenStr], strin2[lenStr], result[lenStr * 2];

	bool second = false;

	printf("Insira a primeira string\n");

	fgets(strin1, lenStr, stdin);

	strin1[strlen(strin1) - 1] = '\0';

	printf("Insira a segunda string\n");

	fgets(strin2, lenStr, stdin);

	strin2[strlen(strin2) - 1] = '\0';


	for (int i = 0; i < (lenStr * 2); i++){

		if (second){
			result[i] = strin2[count2];

			if (strin2[count2] == '\0') break;
			count2++;
		} else {

			if (strin1[i] != '\0'){

				result[i] = strin1[i];

			}else{

				result[i] = ' ';
				second = true;
			} 
		}

	}

	printf("Sua string concatenada é :\n%s\n", result);

	return 0;
}
