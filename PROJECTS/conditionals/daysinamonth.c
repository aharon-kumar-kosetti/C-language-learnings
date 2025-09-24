#include <stdio.h>
int main(){
    int y;
    printf("Enter month:  ");
    scanf("%d", &y);
    if(y == 1|| y == 3|| y == 5 || y == 7 || y == 8|| y == 10 || y == 12){
        printf("this month has 31 days");
    }else if( y == 2){
        printf("This month has 28 days (29 if Leap Year)");
    }
    else{
        printf("this month has 30 days");
    }
}
