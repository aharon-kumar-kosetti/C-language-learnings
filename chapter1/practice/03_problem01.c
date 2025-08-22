#include <stdio.h>

int main() {
    int celsius = 700;
    float fahrenheit = celsius * 9/5 + 32;
    printf("%d degrees celsius in fahrenheit is %.2fF\n", celsius, fahrenheit);
    return 0;
}