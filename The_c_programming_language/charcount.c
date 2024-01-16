/*
#include <stdio.h>

int main()
{

    long counter;

    counter = 0;

    while (getchar() != EOF){

        ++counter;

        printf("%ld\n", counter);
    }
    return 0;

}
*/
#include <stdio.h>
/* count characters in input; 2nd version */
int main()
{
    double nc;
    for (nc = 0; getchar() != EOF; ++nc) printf("%.0lf\n", nc);
    return 0;
}

