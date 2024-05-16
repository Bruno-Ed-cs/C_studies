#include <stdio.h>

int main(){

    double numbers[6], pos, media, sum;
    sum = 0;
    pos = 0;

    for (int i = 0; i < 6; i++){

        scanf("%lf", &numbers[i]);

        if (numbers[i] > 0){
            pos += 1;
            sum += numbers[i];
        }


    }

    media = sum / pos;


    printf("%.0lf valores positivos\n%.1lf\n", pos, media);
    
    return 0;
}
