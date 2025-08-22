// Write a program using 
// recursion to calculate 
// nth element of 
// Fibonacci series

#include <stdio.h>

int fibonacci( int n){
    if(n ==0){
        return 0;
    }else if(n ==1){
        return 1;
    }else if(n<0){
        printf("Invalid input\n");
        return -1;   // or any error flag
    }else{
        return fibonacci(n-1) + fibonacci(n-2);

    }
}


int main() {
    int n;
    printf("Enter the value:   ");
    scanf("%d", &n);
    printf(" the value of fibonacci of %d is %d", n, fibonacci(n));
    return 0;
}