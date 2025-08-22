#include <stdio.h>

int main() {
    int radius = 5;
    float area = 3.1416 * (radius*radius);
    printf("The area of the circle with radius %d is %.2f\n", radius, area);
    return 0;
}