#include <stdio.h>

int sum(int n)
{
    if (n < 0)
    {
        printf("Invalid input\n");
        return -1;
    }
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {

        return n + sum(n - 1);
    }
}

int main()
{
    int a;
    printf("Enter the value of the n:  ");
    scanf("%d", &a);
    printf("The sum of first %d natural numers is %d \n", a, sum(a));
    return 0;
}