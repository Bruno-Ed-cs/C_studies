#include<stdio.h>

int Fibonnachi(int n)
{
    if (n <= 1)
    {
        return n;
    }
    
    return Fibonnachi(n - 2) + Fibonnachi(n - 1);
}

int main()
{
    printf("%d\n", Fibonnachi(10));
    return 0;
}