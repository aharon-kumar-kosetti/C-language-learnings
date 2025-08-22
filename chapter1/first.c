#include <stdio.h>

int main() {
    int n = 65;
    float r = 99.87;

    n = int(r);
    printf(typeof(r) " %d\n", n);


    return 0;
}