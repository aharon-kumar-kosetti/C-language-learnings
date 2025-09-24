#include <stdio.h>

int main() {
    int s1, s2, s3;
    printf("Enter side1, side2, side3 respectively: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    if(s1 == s2 && s2 == s3){
        printf("It is an Equilateral Triangle");
    }else if(s1 != s2 && s2 != s3){
        printf("It is an Scelene Triangle");
    }else{
        printf("It is an Isosceles Triangle");
    }
return 0;
}
