#include <stdio.h>

int main(){

    int vec[20], i = 0, mirror = 19, buffer;

    for (int j = 0; i < 20; i++){

        scanf("%d", &vec[i]);
    }

    for (i = 0; i < 10; i++, mirror--){

        buffer = vec[i];
        vec[i] = vec[mirror];
        vec[mirror] = buffer;
    }

    for (int i = 0; i < 20; i++) printf("N[%d] = %d\n", i, vec[i]);

    return 0;
}
