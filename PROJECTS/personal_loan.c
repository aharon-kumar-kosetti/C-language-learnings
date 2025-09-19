#include <stdio.h>
 
int main() {
  //var initializaton
    int cibil, age, sal;
    printf("Enter your cibil score, age, salary: ");
    scanf("%d %d %d", &cibil, &age, &sal);
    if(age>=25){
        if(sal>=25000){
            if(cibil>=750){
                printf("You are eligible for applying peronal loan.");
            }else if(cibil>=650){
                printf("You didn't get the full loan amount.");
            }else{
                printf("Your CIBIL Score is very low, so you are not eligible.");
            }
        }else{
            printf("Your Salary didnt met our requirements.");
        }
    }else{
        printf("Your Age is not eligible for getting a personal loan.");
    }
}
 
