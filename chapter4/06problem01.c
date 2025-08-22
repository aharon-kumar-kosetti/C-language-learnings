#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf(" sum of 10 natural numbers is %d", sum);
    return 0;
}