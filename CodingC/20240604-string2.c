#include<stdio.h>

#define BUFFER_SIZE 7

int main()
{
    char string[BUFFER_SIZE], c;
    const char senha[] = "abc123";
    int i = 0, auth = 1, acess = 0;
    
    
    printf("Insira a senha:\n");
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
    i = 0;
    //printf("%s\n", string);
    
    for (int j = 0; senha[j] != '\0'; j++)
    {
        if (string[j] != senha[j])
        {
            auth = 0;
        }
        
    }
    
    auth ? (acess = 1) : (acess = 0);
    
    acess ? printf("Acesso autorizado\n") : printf("Acesso negado");
    
    return 0;
}