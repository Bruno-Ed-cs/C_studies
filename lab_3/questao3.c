#include <stdio.h>

int main()
{
    int num, sum = 0j;

    printf("Insira o número para verificar se é perfeito:\n");

    scanf("%d", &num);

    for (int i = 1; i <= (num / 2) ; i++) 
    {

        if (num % i == 0) {
            sum += i;
        }
    }

    (sum == num) ? printf("É perfeito\n") : printf("Não é perfeito\n");

    return 0;
}
