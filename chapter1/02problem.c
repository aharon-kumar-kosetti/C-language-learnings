#include <stdio.h>

int main() {
    int a = 60;
    int b = 12;
    int c = 33;
    int total = (a+b+c)/3;
    if(a>=33 && b >= 33 && c >= 33 && total >= 40){
        printf("This student is passed this Examination");
    }else{
        printf("this student failed the examination");
    }



    return 0;
}