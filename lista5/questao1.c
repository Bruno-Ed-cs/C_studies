#include <stdio.h>

int main(){

    int qtd, input;

    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++){

        scanf("%d", &input);

        if (input == 0){

            printf("NULL\n");
            continue;
        } else if (input % 2 == 0){

            printf("EVEN ");
        } else if (input % 2 != 0) {
            
            printf("ODD ");
        }

        if (input < 0) {
        
            printf("NEGATIVE\n");
        } else {
            printf("POSITIVE\n");
        }

    }

    return 0;

}
