#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iterations, d1, d2;
    char input[4];

    scanf("%d", &iterations);

    for (int i = 0; i < iterations; i++) {

        getchar();
        fgets(input, 4, stdin);

            d2 = atoi(&input[2]);
            d1 = atoi(&input[0]);

        if (input[0] == input[2])
        {
            printf("%d\n", d1 * d2);

        } else if (input[1] >= 'A' && input[1] <= 'Z') {

            printf("%d\n", d2 - d1);
        
        } else if (input[1] >= 'a' && input[1] <= 'z') {

            printf("%d\n", d1 + d2);
        
        }
    }

    return 0;
}
