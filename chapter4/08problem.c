#include <stdio.h>

int main()
{

    int n = 10;
    int factorial = 1;
    for (n; n > 0; n--)
    {
        factorial = factorial * n;
    }
    printf("factorial of 10 is %d", factorial);

    return 0;
}