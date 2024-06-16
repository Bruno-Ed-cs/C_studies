#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define QTD 5

typedef struct Aluno
{
	char nome[100];
	int matricula;
	char curso[100];
	double notas[3];
	double media;


} Aluno;

double GetMedia (double *notas, int qtd)
{
	double sum = 0;

	for (int i = 0 ;i < qtd; i++) {
		sum += notas[i];
	}

	return sum / qtd;
}

void PrintAluno(Aluno aluno)
{

	printf("Nome : %s\n", aluno.nome);
	printf("Matrícula : %d\n", aluno.matricula);
	printf("Curso : %s\n", aluno.curso);

	printf("Notas = {");
	for (int i = 0; i < 3; i++) {

	printf(" %.2lf", aluno.notas[i]);
	}
	printf(" }\n");

	printf("Média : %.2lf\n", aluno.media);

}

Aluno GetBiggestFirst(Aluno *alunos)
{
	double maior_nota = 0;
	int index_maior = 0;

	for (int i = 0; i < QTD; i++) 
	{
		if (alunos[i].notas[0] >= maior_nota) 
		{
			maior_nota = alunos[i].notas[0];
			index_maior = i;
		}
	}

	return alunos[index_maior];

}

Aluno GetBiggestMed(Aluno *alunos)
{
	double maior_media= 0;
	int index_maior = 0;

	for (int i = 0; i < QTD; i++) 
	{
		if (alunos[i].media >= maior_media) 
		{
			maior_media = alunos[i].media;
			index_maior = i;
		}
	}

	return alunos[index_maior];

}


Aluno GetLowestMed(Aluno *alunos)
{

	double menor_media = 100000.0f;
	int index = 0;

	for (int i = 0; i < QTD; i++) 
	{
		if (alunos[i].media <= menor_media) 
		{
			menor_media = alunos[i].media;
			index = i;
		}
	}

	return alunos[index];

}


int main()
{

	Aluno uern[QTD];

	for (int i = 0; i < QTD; i++) {

		system("clear");
		printf("Aluno %d\n", i+1);
		uern[i].matricula = i;
		uern[i].media = 0;

		printf("Insira o nome do aluno %d\n", i+1);
		fgets(uern[i].nome, 100, stdin);
		if (strcspn(uern[i].nome, "\n"))
		{
			uern[i].nome[strcspn(uern[i].nome, "\n")] = '\0';
		}

		printf("Insira o curso do aluno %d\n", i+1);
		fgets(uern[i].curso, 100, stdin);
		if (strcspn(uern[i].curso, "\n"))
		{
			uern[i].curso[strcspn(uern[i].curso, "\n")] = '\0';
		}

		for (int j = 0; j < 3; j++) 
		{
			printf("Insira a %dª nota de %s\n", j+1, uern[i].nome);

			scanf("%lf", &uern[i].notas[j]);
		}
		getchar();

		uern[i].media = GetMedia(uern[i].notas, 3);

	}

	system("clear");

	printf("============================================================================================================================\n");
	for (int i = 0; i < QTD; i++) {

		printf("\n");
		PrintAluno(uern[i]);
	}

	printf("\nAluno com a maior primeira nota:\n");
	PrintAluno(GetBiggestFirst(uern));

	printf("\nAluno com a maior média:\n");
	PrintAluno(GetBiggestMed(uern));


	printf("\nAluno com a menor media:\n");
	PrintAluno(GetLowestMed(uern));


	return 0;
}
