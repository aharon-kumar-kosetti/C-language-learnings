#include <stdio.h>
int main() {
    int age;
    char g;
    printf("Enter Your age: ");
    scanf("%d", &age);
    printf("specify Your Gender(M/F): ");
    scanf(" %c", &g);
    if(g == 'M' || g == 'm'){
        if(age >=21){
            printf("Your are eligible for marriage");
        }else{
            printf("Your are age is not eligible for marriage. Age of minimum 21 is Required");
        }
    }else if (g == 'f' || g == 'F'){
        if(age >=18){
            printf("Your are eligible for marriage");
        }else{
            printf("Your are age is not eligible for marriage. Age of minimum 18 is required.");
        }
    }
}
 
