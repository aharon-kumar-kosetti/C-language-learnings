#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the X and Y Coordinates:  ");
    scanf("%d %d", &x,&y);
    if(x>0 && y>0){
        printf("Coordinates is in First Quadrant");
    }else if (x<0 && y>0){
        printf("Coordinates is in Second Quadrant");
    }else if (x<0 && y<0){
        printf("Coordinates is in Third Quadrant");
    }else if (x>0 && y<0){
        printf("Coordinates is in Fourth Quadrant");
    }else{
        printf("Coordinate is Origin (0,0)");
    }
}
