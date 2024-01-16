#include <stdio.h>

#define MIN 0 /*minimum celcius value*/
#define MAX 300 /*maximun celcius value*/
#define STEP 20 /*incrementation value for the graph*/


int main(){
    double fahr, celcius;
    printf("ºC   | ºF\n");
    /**
    while (celcius >= min) {
        
        fahr = (celcius * 1.8) + 32;
        printf("%4.0lf\t%4.1lf\n", celcius, fahr);
        celcius += step;
    }
    **/
    for (celcius = MAX; celcius >= MIN; celcius -= STEP){
        fahr = (celcius * 1.8) + 32;
        printf("%4.0lf\t%4.1lf\n", celcius, fahr);
    }
    return 0;
}
