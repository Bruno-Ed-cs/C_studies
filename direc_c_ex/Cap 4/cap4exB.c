#include<stdio.h>
#include<math.h>

double A, B, C, x1, x2, delta;

int main()
{

    printf("A = "); scanf("%lf", &A);
    printf("B = "); scanf("%lf", &B);
    printf("C = "); scanf("%lf", &C);
   
    if (A == 0.0) {
       printf("A = 0, então x = 0");
       return 0;
    }
    
    delta = pow(B, 2) - 4 * A * C;
    
    if (delta < 0){
        printf("Delta menor do que zero, solução não real\n");
        return 0;
        
    } else if (delta == 0){
    
        x1 = (-B + 0) / (2 * A);
        
        printf("X = %.2lf\n", x1);
        
        return 0;
    } else {
        
        x1 = (-B + sqrt(delta)) / (2 * A);
        
        x2 = (-B - sqrt(delta)) / (2 * A);
    
        printf("X' = %.2lf \nX\" = %.2lf \n", x1, x2);
        
        return 0;
    }
    
    
    return 0; 
}
