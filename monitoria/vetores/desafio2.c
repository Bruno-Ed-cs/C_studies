#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int sum = 0, tSum = 0,endPos = 0, pos = 0, fPos = 0, sPos = 0, iteracoes = 0, fIteracoes = 0;

	int conjunto[10]; 

	//loop para popular o conjunto com numeros aleatorios
	srand(time(NULL));
	srand(clock() * time(NULL));
	for (int i = 0; i < 10; i++){

		conjunto[i] = rand() % 100001;

		if (rand() % 2 == 0 ) conjunto[i] *= -1;
	} 


	//loop para definir o inicio do intervalo que vai ser corrido
	for (int i = 0; i < 10; i++){

		//loop para definir o final do intervalo a ser somado
		for (endPos = 9, pos = i; endPos > pos; endPos--){

			tSum = 0;

			//loop para somar o intervalo
			for (int y = pos; y <= endPos; y++){

				tSum += conjunto[y];

			}

			//verificação para ver ser a soma é a maior, caso seja sao registrados o intervalo, a soma maior e qual iteração foi encontrada;
			if (tSum > sum) {

				sPos = pos;
				fPos = endPos;
				sum = tSum;
				fIteracoes = iteracoes;
			}
			//contador de iteracoes, aka quando um intervvalo termina de ser somado
			iteracoes++;



		}
	}

	printf("Conjunto = {");
	for (int i = 0; i < 10; i++) printf(" %d ", conjunto[i]);
	printf("}\n");

	printf("Soma maior = %d\nintervalo = de %d a %d\nIterações totais = %d\nIteração da vitoria = %d\n\n", sum, sPos, fPos, iteracoes, fIteracoes);


	return 0;
}
