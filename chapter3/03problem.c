#include <stdio.h>

int main() {
    int a = 800000;
    float b = a*0.05;
    float c = a*0.20;
    float d = a*0.30;
    if(a>250000 && a<= 500000){
        printf("you have to pay %.2f as tax", b);
    }else if(a>500000 && a<= 1000000){
        printf("you have to pay %.2f as tax", c);
    }else if(a>1000000){
        printf("you have to pay %.2f as tax", d);
    }else{
        printf("you dont have to pay to tax");
    }
    return 0;
}