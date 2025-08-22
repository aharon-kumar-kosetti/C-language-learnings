#include <stdio.h>

int main()
{
    int n = 9;
    for (int i = 1; i < 11; i++)
    {
        int a = n * i;
        printf(" %d * % d = %d\n", n, i, a);
    }

    return 0;
}