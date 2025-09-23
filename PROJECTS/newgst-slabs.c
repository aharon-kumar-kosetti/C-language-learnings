#include <stdio.h>

int main() {
    //ch - choice/ bf - before tax update/ af - after tax update/ am - amount purchased/ sv - saved amount/
    int ch; float bf, af, am, sv;
    printf("1. Medicine\n2. auto-mobiles\n3.cement\n4.groceries\n5.insurance\n>>>Select one from above:  ");
    scanf("%d", &ch);
    printf("Enter the amount purchased:  ");
    scanf("%f", &am);
    
    if(ch==1){
        bf = am*0.12;
        af = am*0.05;
        sv = bf - af;
    }
    else if(ch==2 || ch==3){
        bf = am*0.28;
        af = am*0.18;
        sv = bf - af;
    }
   
    else if(ch==4){
        bf = am*0.18;
        af = am*0.05;
        sv = bf - af;
    }
    else if(ch==5){
        bf = am*0.18;
        af = am*0.12;
        sv = bf - af;
    }
    printf("Before the Tax Slab Update: Rs. %.2f\n", bf + am);
    printf("After the Tax Slab Update: Rs. %.2f\n", af + am);
    printf("Amount You Saved: Rs. %.2f\n", sv);
    
    return 0;
}
