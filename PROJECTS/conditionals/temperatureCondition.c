#include <stdio.h>

int main() {
    float c;
    printf("Enter temperature in centigrade: ");
    scanf("%f", &c);
    if(c>=40){
        printf("it is very hot");
    }else if(c<40 && c>=30){
        printf("it is hot");
    }else if(c<30 && c>=20){
        printf("it is noraml temperature");
    }else if(c<20 && c>=10){
        printf("it is cold Weather");
    }else if(c<10 && c>=0){
        printf("it is very cold temperature");
    }else{
        printf("it is freezing temperature");
    }
    return 0;
}
