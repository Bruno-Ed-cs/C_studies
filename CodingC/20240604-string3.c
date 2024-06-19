#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define BUFFER_SIZE 7

int main()
{
    char string[BUFFER_SIZE], c;
    const char senha[] = "abc123";
    bool acess = false;
    
    
    printf("Insira a senha:\n");
    fgets(string, BUFFER_SIZE, stdin);
    /**
    while((c = getchar()) != '\n')
    {
        if (i >= BUFFER_SIZE)
        {
            printf("Limite de caracteres alcançado\n");
            string[BUFFER_SIZE -1] = '\0';
            break;
        }
        
        string[i] = c;
        i++;
    
    }
    
    string[i + 1] = '\0';
    printf("%s\n", string);
    **/
    
    /**
    for (int j = 0; senha[j] != '\0'; j++)
    {
        if (string[j] != senha[j])
        {
            auth = 0;
        }
        
    }
    **/
    
    if (!(strcmp(senha, string))) acess = true;
    
    acess ? printf("Acesso autorizado\n") : printf("Acesso negado");
    
    return 0;
}