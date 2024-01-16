#include<stdio.h>

int a, b, c, d, intarr[4];


int main()
{
    printf("A = "); scanf("%d", &a);
    printf("\nB = "); scanf("%d", &b);
    printf("\nC = "); scanf("%d", &c);
    printf("\nD = "); scanf("%d", &d);
    
    intarr[0] = a;
    intarr[1] = b;
    intarr[2] = c;
    intarr[3] = d;

    printf("\n");
    
    for (int i = 0; i <= 3; i++){
        for (int n = i + 1; n <= 3; n++) {
            int add = intarr[i] + intarr[n];
            int multi = intarr[i] * intarr[n];
            
            printf("%d : %d \n", add, multi);
        
        }
        printf("\n");
    }
    
    return 0;
}
/*
void multiAdd(int x, int y){

    int radd, rmulti;
    
    radd = x + y;
    rmulti = x * y;
    results[2] = radd, rmulti;

    
    return radd, rmulti;

}

*/
