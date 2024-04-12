#include <stdio.h>

int main(){
    
    int km;
    double gas, consumed;

    scanf("%d", &km);
    scanf("%lf", &gas);

    consumed = (double)km / gas;

    printf("%.3lf km/l\n", consumed);

    return 0;
}
