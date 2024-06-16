#include <stdio.h>
#include <stdbool.h>

int main()
{
    int qtd = 0, iterations;
    char panel[1000];

    scanf("%d", &iterations);

    getchar();

    for (int i = 0; i < iterations; i++) {

        fgets(panel, 1000, stdin);

        int ci = 0;

        while (panel[ci] != '\n' && panel[ci] != '\0') {

            switch (panel[ci]) {
            
                case '1':
                    qtd += 2;
                break;
                case '2':
                    qtd += 5;
                break;
                case '3':
                    qtd += 5;
                break;
                case '4':
                    qtd += 4;
                break;
                case '5':
                    qtd += 5;
                break;
                case '6':
                    qtd += 6;
                break;
                case '7':
                    qtd += 3;
                break;
                case '8':
                    qtd += 7;
                break;
                case '9':
                    qtd += 6;
                break;
                case '0':
                    qtd += 6;
                break;
            }

            ci++;
        
        }

        if (qtd > 0) printf("%d leds\n", qtd);

        qtd = 0;
    }

    return 0;
}
