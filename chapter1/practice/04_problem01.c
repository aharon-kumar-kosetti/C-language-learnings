#include <stdio.h>

int main() {
    int principle = 40000;
    float rate = 67.5;
    int time = 6;
    float simple_intrest = (principle * rate * time) / 100;
    printf("simple intrest = %.3f\n", simple_intrest);
    return 0;
}