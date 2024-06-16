#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], c, s;

    printf("Insira a palavra:\n");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Insira o caractere a ser substiruído: ");
    c = getchar();
    getchar();

    printf("Insira o caractere a ser inserido: ");
    s = getchar();


    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == c) str[i] = s;
    }

    printf("Resultado = %s\n", str);


    return 0;
}
