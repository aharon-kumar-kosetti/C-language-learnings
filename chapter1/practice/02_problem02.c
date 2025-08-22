#include <stdio.h>

int main() {
    int radius = 5;
    int height = 7;
    float volume = 3.1416 * (radius*radius) * height;
    printf("The volume of the cylinder with radius %d and height %d is \n %.2f\n", radius, height, volume);
    return 0;
}