
#include <stdio.h>

int main()
{
    int n = 10;
    int sum = 0;
    for (int i = 1; i < 11; i++)
    {
        int a = n * i;
        printf("number is %d\n", a);
        sum = sum + a;

    }
    printf(" sum of all numbers of 10 multiples is %d", sum);

    return 0;
}