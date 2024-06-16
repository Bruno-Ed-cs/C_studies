#include <stdio.h>

int main()
{

    double a = 7000000, b = 12000000, year = 0;

    while (a < b) {

        a = a + (a * 0.05);
        b = b + (b * 0.035);
        year++;
    
    }

    printf("A ultrapassou B no ano %.0lf\n", year);

    return 0;
}
