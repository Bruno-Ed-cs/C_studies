#include <stdio.h>

int main()
{
    int input;

    scanf("%d", &input);

    for (int i = 1; i <= input ;i++) {

        printf("%d %d %d\n%d %d %d\n", i, i * i, i * i * i, i, 1 + (i * i), 1 + (i * i * i));
    }

    return 0;
}
