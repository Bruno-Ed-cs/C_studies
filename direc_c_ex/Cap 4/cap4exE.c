#include<stdio.h>
#include<math.h>

double A, B, diff;

int main()
{

    printf("A = "); scanf("%lf", &A);
    printf("B = "); scanf("%lf", &B);
   
    if (A > B) {
    
        diff = A - B;
        
        printf("B é menor do que A por uma diferença de \n%.2lf \n", diff);
   
    } else {
    
        diff = B - A;
        
        printf("A é menor do que B por uma diferença de \n%.2lf \n", diff);
    }
    
    
    return 0;
}