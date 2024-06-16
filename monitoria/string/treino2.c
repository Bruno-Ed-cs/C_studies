#include <stdio.h>

int main(){

	char string[100];
	int max;

	printf("Insira sua string para que eu lhe mostre seu inverso\n");

	fgets(string, 100, stdin); 

	for (max = 0; string[max] != '\0'; max++);

	for (; max >= 0; max--) {

		putchar(string[max]);
	}

	printf("\n");

	return 0;
}
