#include <stdio.h>

int main(){

	int num[10], nPar = 0, nImp = 0;

	for (int i = 0; i < 10; i++) {
	
		printf("Insisra o %do numero: \n", i + 1);
		scanf("%d", &num[i]);


		if ((num[i] % 2) != 0){
			
			nImp++;
		} else {
		
			nPar++;
		}
	}

	int pares[nPar], impares[nImp], pp = 0, ii = 0;

	for (int i = 0; i < 10; i++) {

		printf("l1\n");
		if ((num[i] % 2) != 0){
			
			impares[ii] = num[i];	
			ii++;
		} else if ((num[i] % 2) == 0){
		
			pares[pp] = num[i];
			pp++;
		}
	}



	printf("Pares = ");
	for (int i = 0; i < nPar; i++) printf("%d ", pares[i]);
	printf("\n");

	printf("Ímpares = ");
	for (int i = 0; i < nImp; i++) printf("%d ", impares[i]);
	printf("\n");
	

	return 0;
}
