#include<stdio.h>

int main()
{
    char input[4];
    int iteracoes, d1, d2;
    
    scanf("%d", &iteracoes);
    
    for (int i = 0; i < iteracoes; i++)
    {
        getchar();
    
        fgets(input, 4, stdin);
        
        printf("%s\n", input);
        
        d1 = input[0] - '0';
        d2 = input[2] - '0';
        
        if (input[0] == input[2])
        {
            printf("%d\n", d1 * d2);
        } else if (input[1] >= 'a' && input[1] <= 'z')
        {
            printf("%d\n", d2 - d1);
        } else if (input[1] >= 'A' && input[1] <= 'Z')
        {
            printf("%d\n", d1 + d2);
        }
    }
    return 0;
}