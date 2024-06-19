#include<stdio.h>

int main()
{
    char string[200], c;
    int i = 0;
    
    printf("Insira uma frase para que eu lhe apresente apenas as vogais\n");
    while((c = getchar()) != '\n')
    {
        
        string[i] = c;
        i++;
    
    }
    
    string[i + 1] = '\0';
    i = 0;
    printf("%s\n", string);
    
    for (int j = 0; string[j] != '\0'; j++)
    {
        switch(string[j])
        {
            case 'a': string[i] = 'a';
                i++;
                break;
                
            case 'e': string[i] = 'e';
                i++;
                break;
                
            case 'i': string[i] = 'i';
                i++;
                break;
                
            case 'o': string[i] = 'o';
                i++;
                break;
                
            case 'u': string[i] = 'u';
                i++;
                break;
        
        }
        
    }
    
    string[i] = '\0';
    
    printf("%s\n", string);
    
    return 0;
}