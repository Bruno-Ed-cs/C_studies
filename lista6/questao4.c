#include<stdio.h>

int main()
{
    int vec[10];
    
    for (int i = 0; i < 10; i++){
    
        scanf("%d", &vec[i]);
        
        if ( vec[i] <= 0 ) vec[i] = 1;
    
    }
    
    for (int i = 0; i < 10; i++) printf("X[%d] = %d\n", i, vec[i]);
    return 0;
}
