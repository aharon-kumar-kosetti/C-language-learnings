#include <stdio.h>

int main() {
    int age;
    printf("Enter your Age: ");
    scanf("%d", &age);
    if(age>=60){
        printf("You are a Senior");
    }else if(age<60 && age>19){
          printf("You are an Adult");
    }else if(age<20 && age>12){
          printf("You are a Teenager");
    }else{
          printf("You are a Child");
    }
return 0;
}
