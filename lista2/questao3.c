#include <stdio.h>

int main(){


    int seconds, sec, hour, minute;

    scanf("%d", &seconds);

    minute = seconds / 60;
    
    sec = seconds % 60;

    hour = minute / 60;

    minute = minute % 60;

    printf("%d:%d:%d\n", hour, minute, sec);
    return 0;

}
