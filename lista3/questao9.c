#include <stdio.h>

/**
86400
3600
60
**/

int main() {
    int day, hour, minute, second, day2, hour2, minute2, second2, fday, fhour, fminute, fsecond;

    scanf("Dia %d", &day);
    scanf("%d : %d : %d", &hour, &minute, &second);

    scanf(" Dia %d", &day2);
    scanf("%d : %d : %d", &hour2, &minute2, &second2);

    second += minute * 60 + hour * 3600 + day * 86400;
    second2 += minute2 * 60 + hour2 * 3600 + day2 * 86400;    

    fsecond = second2 - second;

    fday = fsecond / 86400;
    fsecond %= 86400;

    fhour = fsecond / 3600;
    fsecond %= 3600;

    fminute = fsecond / 60;
    fsecond %= 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", fday, fhour, fminute, fsecond);

    return 0;
}

