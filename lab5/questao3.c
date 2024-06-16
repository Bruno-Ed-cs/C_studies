#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, vog = 0;

    printf("Insira a string:\n");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {

        switch (str[i]) {

            case 'a':
                vog++;
            break;
 
            case 'e':
                vog++;
            break;
            case 'i':
                vog++;
            break;
            case 'o':
                vog++;
            break;
            case 'u':
                vog++;
            break;       

            case 'A':
                vog++;
            break;
 
            case 'E':
                vog++;
            break;
            case 'I':
                vog++;
            break;
            case 'O':
                vog++;
            break;
            case 'U':
                vog++;
            break;       
        }

        i++;
    
    }

    printf("Vogais = %d\n", vog);

    return 0;
}
