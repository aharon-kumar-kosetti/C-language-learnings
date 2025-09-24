#include <stdio.h>

int main() {
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
    if(score>=50){
        printf("You passed the test.");
    }else{
        printf("You failed the test.");
    }
return 0;
}
