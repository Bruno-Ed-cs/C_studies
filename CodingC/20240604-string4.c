#include<stdio.h>

#define BUFFER_SIZE 31

int main()
{
    char string[BUFFER_SIZE], c;
    int i = 0, tam = 0;
    
    printf("Insira a palavra:\n");
    
    while((c = getchar()) != '\n')
    {
        if (i >= BUFFER_SIZE)
        {
            printf("Limite de caracteres alcançado\n");
            string[BUFFER_SIZE -1] = '\0';
            goto overflow;
        }
        
        string[i] = c;
        i++;
    
    }
    
    string[i] = '\0';
    overflow :
    printf("%s\n", string);
    
    for(tam = 0; string[tam] != '\0'; tam++);
    
    printf("Tamanho = %d\n", tam);
    
    
    return 0;
}