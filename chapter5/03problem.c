// 3. Write a function to 
// calculate force of attraction 
// on a body of mass ‘m’
// exerted by earth. 
// Consider g = 9.8m/s2

#include <stdio.h>

float force(float x){
    float att = 9.8 * x;
    return att;
}

int main() {
    float value;
    printf("enter the value of Mass(in KG): ");
    scanf("%f", &value);
    printf("the Force of attraction on %.2f KG mass is %.2f ", value, force(value));
    return 0;
}