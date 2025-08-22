#include <stdio.h>

int main()
{
    int n = 10;
    for (int i = 10; i > 0; i--)
    {
        int a = n * i;
        printf(" %d * % d = %d\n", n, i, a);
    }

    return 0;
}