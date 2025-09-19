#include <stdio.h>
 
int main() {
    int a, b, c;
    printf("Enter three Numbers a, b, c:  ");
    scanf("%d %d %d", &a, &b, &c);
  //for a
    if(a>c){
        if(a>b){
            printf("%d is biggest number.", a);
        }else{
            printf("%d is biggest number.", b);
        }
    }
  //for b
    else if(b>a){
        if(b>c){
            printf("%d is biggest number.", b);
        }else{
            printf("%d is biggest number.", c);
        }
    }
  //for c
    else{
        printf("%d is biggest number.", c);
    }
    return 0;
}
