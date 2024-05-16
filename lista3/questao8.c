#include <stdio.h>

int main(){

    double numbers[6], pos;

    for (int i = 0; i < 6; i++){

        scanf("%lf", &numbers[i]);

        if (numbers[i] > 0) pos +=1;

    }

    printf("%.0lf valores positivos\n", pos);
    
    return 0;
}
