#include <stdio.h>

int main(){
    double fahr, celcius;
    double min, max, step;

    min = 0;
    max = 300;
    step = 20;

    celcius = min;

    printf("ºC   | ºF\n");
    while (celcius <= max) {
        
        fahr = (celcius * 1.8) + 32;
        printf("%4.0lf\t%4.1lf\n", celcius, fahr);
        celcius += step;
    }
    return 0;
}
