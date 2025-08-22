#include <stdio.h>

int main()
{
    int n = 10;
    int factorial = 1;
    while (n > 0)
    {
        factorial = factorial * n;
        n--;
    }
    printf("factorial of 10 is %d", factorial);
    return 0;
}