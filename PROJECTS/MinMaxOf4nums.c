#include <stdio.h>

int main() {
    int a, b, c,d;
    int min, max;
    printf("Enter num1 , num2, num3, num4 Respectively:   ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    // checking first two numbers
    if(a>b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    // comparing min max with third var c
    if(c>max){
        max = c;
    }else if(c<min){
        min = c;
    }
    // comparing new min max with fourth var d
    if(d>max){
        max = d;
    }else if(d<min){
        min = d;
    }
    //giving output
    printf("Maximum value is %d\n", max);
    printf("Minimum value is %d\n", min);
    return 0;
}
