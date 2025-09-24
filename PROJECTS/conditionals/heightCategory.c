#include <stdio.h>
int main(){
    float h;
    printf("Enter your height in CM:  ");
    scanf("%f", &h);
    if(h >=160 && h<= 175){
        printf("Your have average height");
    }else if(h>175){
        printf("your are tall");
    }else{
        printf("your short in terms of height");
    }
}
