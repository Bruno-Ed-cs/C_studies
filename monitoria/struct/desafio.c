#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


typedef struct Livro
{

	char nome[100];
	bool disponivel;


} Livro;

typedef struct Usuario
{
	char nome[100];
	char livros[3][100];

} Usuario;

typedef struct Biblioteca
{
	char nome[100];
	Usuario usuarios[5];
	Livro livros[7];

} Biblioteca;

char cur_user[100] = "";
Biblioteca Babel = { 0 };

void BiblioInit()
{
	strcpy(Babel.nome, "Biblioteca de Babel");

	Babel.livros[0] = (Livro){"Senhora", true };
	Babel.livros[1] = (Livro){"1981", false };
	Babel.livros[2] = (Livro){"Revolução dos bichos", true};
	Babel.livros[3] = (Livro){"Memóras Póstumas de Brás cubas", true};
	Babel.livros[4] = (Livro){"Algebra linear", true};
	Babel.livros[5] = (Livro){"O ladrão de raios", false};
	Babel.livros[6] = (Livro){"O grande conflito", true};


	Babel.usuarios[0] = (Usuario){"Rogerio", 0}; 
	Babel.usuarios[1] = (Usuario){"Spencer", 0}; 
	Babel.usuarios[2] = (Usuario){"", 0}; 
	Babel.usuarios[3] = (Usuario){"", 0}; 
	Babel.usuarios[4] = (Usuario){"", 0}; 

	strcpy(Babel.usuarios[0].livros[0], Babel.livros[1].nome);
	strcpy(Babel.usuarios[0].livros[1], Babel.livros[5].nome);
}


void UserLogin()
{
	char user[100];
	bool cadastrado = false;
	int index;

	printf("Insira o nome do usuário: ");
	fgets(user, 100, stdin);
	user[strcspn(user, "\n")] = '\0';

	for (int i = 0; i < 5; i++) {

		if (strcmp(user, Babel.usuarios[i].nome) == 0) 
		{
			cadastrado = true;
			index = i;
			printf("Encontrado\n");
			break;
		}
	}

	if (cadastrado) {

		strcpy(cur_user, Babel.usuarios[index].nome);
		printf("Usuario logado com sucesso\n");
		printf("Pressione enter...\n");

	} else {
		printf("Usuario não encontrado\n");
		printf("Pressione enter...\n");

	}

	getchar();
}

void UserSignUp()
{

	char user[100];
	bool avaliable = false;
	int index;

	for (int i = 0; i < 5; i++)
	{

		if (!strcmp(Babel.usuarios[i].nome, ""))
		{
			avaliable = true;
			index = i;
			break;

		}
	}

	if (avaliable)
	{
		printf("insira o nome do novo usuário: ");
		fgets(user, 100, stdin);
		user[strcspn(user, "\n")] = '\0';


		strcpy(Babel.usuarios[index].nome, user);
		for (int i = 0; i < 3; i++) strcpy(Babel.usuarios[index].livros[i], "");
		printf("Usuario criado com sucesso\n");
		
	} else 
	{
		printf("Sistema cheio\n");
		
	}

	printf("Pressione enter...\n");
	getchar();

}

void ListBooks()
{
	printf("Livros cadastrados:\n");

	for (int i = 0; i < 7; i++) {

		printf("[%d] %s\n", i, Babel.livros[i].nome);
	
	}

	printf("Pressione enter...\n");
	getchar();

}

void ListOwnedBooks()
{
	printf("Livros emprestados:\n");

	for (int i = 0; i < 7; i++) {

		if (!Babel.livros[i].disponivel)
		{
			printf("%s ", Babel.livros[i].nome);

			for (int j = 0; j < 5; j++) {
				for (int k = 0; k < 3; k++) {
				
					if(!strcmp(Babel.usuarios[j].livros[k], Babel.livros[i].nome)) printf("{%s}\n", Babel.usuarios[j].nome);
				}
			}
		}
	
	}

	printf("Pressione enter...\n");
	getchar();

}

bool UserAuth ()
{

	if (!strcmp(cur_user, ""))
	{
		printf("Usuario nao logado\n");
		printf("Pressione enter...\n");
		getchar();

		return 0;

	} else {
		return 1;
	}

}


void PickBook() {
    int livro;
    bool disponivel = false;
    bool livro_lim = true;

    printf("Livros disponíveis para empréstimo: \n");

    for (int i = 0; i < 7; i++) {
        if (Babel.livros[i].disponivel) {
            disponivel = true;
            printf("[%d] %s\n", i, Babel.livros[i].nome);
        }
    }

    if (!disponivel) {
        printf("Não há livros disponíveis\n");
        printf("Pressione enter...\n");
        getchar();
        return;
    }

    printf("Qual livro deseja pegar: ");
    scanf("%d", &livro);
    getchar();

    for (int i = 0; i < 5; i++) {
        if (strcmp(cur_user, Babel.usuarios[i].nome) == 0) {
            for (int j = 0; j < 3; j++) {
                if (strcmp("", Babel.usuarios[i].livros[j]) == 0) {
                    livro_lim = false;
                    Babel.livros[livro].disponivel = false;
                    strcpy(Babel.usuarios[i].livros[j], Babel.livros[livro].nome);
                    printf("Livro Emprestado com sucesso\n");
                    break;
                }
            }
            if (livro_lim) {
                printf("Você já estourou seu limite de livros, devolva pelo menos 1\n");
            }
            break;
        }
    }

    printf("Pressione enter...\n");
    getchar();
}

void ReturnBook() {
    int livro, user_index = 0;

    printf("Seus livros para devolução: \n");

    for (int i = 0; i < 5; i++) {
        if (strcmp(Babel.usuarios[i].nome, cur_user) == 0) {
            user_index = i;

            for (int j = 0; j < 3; j++) {
                if (strcmp(Babel.usuarios[i].livros[j], "") != 0)
                    printf("[%d] %s\n", j, Babel.usuarios[i].livros[j]);
            }
            break;
        }
    }

    printf("Qual livro deseja devolver: ");
    scanf("%d", &livro);
    getchar();

    for (int i = 0; i < 7; i++) {
        if (strcmp(Babel.usuarios[user_index].livros[livro], Babel.livros[i].nome) == 0) {
            Babel.livros[i].disponivel = true;
            break;
        }
    }

    strcpy(Babel.usuarios[user_index].livros[livro], "");

    printf("Pressione enter...\n");
    getchar();
}

void SearchBook()
{

	char search[100];
	bool found = false;

	printf("Livro:\n");
	fgets(search, 100, stdin);
	search[strcspn(search, "\n")] = '\0';

	for (int i = 0; i < 7; i++) {

		if (strcmp(search, Babel.livros[i].nome) == 0) {

			printf("Livro encontrado\n");
			printf("[%d] %s\n",i ,  Babel.livros[i].nome);
			found = true;
			break;
		}
	
	}

	if (!found) {
		printf("Livro não encontrado\n");
	
	}

	printf("Pressione enter...\n");
	getchar();

	
}

int main()
{
	bool running = true;
	int opt = 0;
	BiblioInit();

	//if (!(strcmp(cur_user.nome, "\0"))) printf("Vazio");

	while (running) {

	system("clear");
		printf("-- Bibliosys 1.0 --\n\n");
		printf("O que deseja realizar:\n");

		if (!strcmp(cur_user, ""))
		{
			printf("Usuario não logado\n");

		} else {

			printf("Usuario : %s\n", cur_user);
		}

		printf("[1] Logar usuario\n");
		printf("[2] Cadastrar usuario\n");
		printf("[3] Listar livros da biblioteca\n");
		printf("[4] Listar livros emprestados\n");
		printf("[5] Pegar livro emprestado (requer login)\n");
		printf("[6] Devolver livro emprestado (requer login)\n");
		printf("[7] Pesquisar livro\n");
		printf("[8] Sair\n");

		scanf("%d", &opt);
		getchar();
		system("clear");

		switch (opt) {

			case 1:
				UserLogin();

			break;

			case 2:
				UserSignUp();

			break;

			case 3:
				ListBooks();

			break;

			case 4:
				ListOwnedBooks();

			break;

			case 5:
				if (UserAuth()) PickBook();

			break;

			case 6:
				if (UserAuth()) ReturnBook();

			break;

			case 7:
				SearchBook();

			break;	

			case 8:
				printf("Adeus\n");
				running = false;
			break;

				default:
					printf("Opção inválida\n");
					printf("Pressione enter...\n");
					getchar();
				break;
			}

	}
	return 0;
}

