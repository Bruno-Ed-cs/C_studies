#include<stdio.h>

struct Temperatures {

    double celcius;
    double fahrenheight;
};

double ConversionToC(double fahrenheight);

double ConversionToF(double celcius);

int main(){

    double fahr, celsius;
    double lower, upper, step;
    lower = 0;
    /* lower limit of temperature scale */
    upper = 300;
    /* upper limit */
    step = 20;
    /* step size */

    fahr = lower;
    printf("ºF    | ºC    \n");
    while (fahr <= upper) {
        celsius = ConversionToC(fahr); 
        printf("%4.2lf\t%4.2lf\n", fahr, celsius);
        fahr = fahr + step;
    }


    return 0;
}

double ConversionToC(double fahrenheight){

    double celcius;

    celcius = (5.0/9.0) * (fahrenheight - 32.0);

    return celcius;
}

double ConversionToF(double celcius){

    double fahrenheight;

    fahrenheight = (celcius * 1.8) + 32;

    return fahrenheight;
}
