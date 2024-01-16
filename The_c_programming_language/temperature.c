#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
int main()
{
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
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.2lf\t%4.2lf\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
