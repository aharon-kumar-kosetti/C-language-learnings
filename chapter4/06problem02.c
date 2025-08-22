#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 0;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf(" sum of 10 natural numbers is %d", sum);
    return 0;
}