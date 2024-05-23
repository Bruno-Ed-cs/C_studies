#include <stdio.h>

int main(){

	double notas[3], peso[3], media = 0, denominador = 0;

	for(int i = 0; i < 3; i++){
		
		printf("Insira a %da nota\n", i + 1);
		scanf("%lf", &notas[i]);

		printf("Insira o peso da %da nota\n", i + 1);
		scanf("%lf", &peso[i]);

		media += notas[i] * peso[i];
		denominador += peso[i];

	}

	media /= denominador;

	printf("Média = %.2lf\n", media);

	return 0;
}
