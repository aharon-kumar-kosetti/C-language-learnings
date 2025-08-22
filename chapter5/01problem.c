// q. Write a program
// using function to find
// average of three numbers.

#include <stdio.h>

float average(int x, int y, int z)
{
    return (x + y + z) / 3.0;
}

int main()
{
    int a, b, c;
    printf("enter the value of number 1: ");
    scanf("%d", &a);
    printf("enter the value of number 2: ");
    scanf("%d", &b);
    printf("enter the value of number 3: ");
    scanf("%d", &c);
    printf("the average value of entered three numbers is: %.2f ", average(a, b, c));
    return 0;
}