#include <stdio.h>

int main(){

    int in = 0, out = 0, control = 0, i = 0, num = 0;

    scanf("%d", &control);

    while (i < control) {
    
        scanf("%d", &num);

        if (num >= 10 && num <= 20){
            in++;
        } else {
            out++; 
        }

        i++;

    }

    printf("%d in\n%d out\n", in, out);


        return 0;

}
