// 2. Write a function to
// convert Celsius
// temperature into Fahrenheit.

#include <stdio.h>

float f2c(int x)
{
    float fahrenheit;

    fahrenheit = x * (9 / 5.0) + 32;
    return fahrenheit;
}

int main()
{
    int celsius;
    printf("Enter the value of Celsius:  ");
    scanf("%d", &celsius);
    printf(" the value of %d celsius in fahrenheit is %.1f", celsius, f2c(celsius));
    return 0;
}