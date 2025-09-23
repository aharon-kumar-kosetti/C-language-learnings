#include <stdio.h>
int main(){
    // uni - units/ bill - calculated bill
    int uni;
    float bill = 0;
    // taking inpot
    printf("Enter the Number of Units Consumed: ");
    scanf("%d", &uni);
    // for first 50 units
    if(uni>50){
        bill = bill + (50*2.30);
        uni = uni - 50;
        // next 50 units (50 + 50)
        if(uni>50){
            bill = bill + (50*3.50);
            uni = uni - 50;
            // next 100 units (50 + 50 + 100)
            if(uni>100){
                bill = bill + (100*4.20);
                uni = uni - 100;
            // next 50 units ( 50 + 50 + 100 + 50)
                if(uni>50){
                    bill = bill + (50*5.50);
                    uni = uni - 50;
                // next 50 units ( 50 + 50 + 100 + 50 + 50)
                    if(uni>50){
                        bill = bill + (50*6.00);
                        uni = uni - 50;
                    // next 50 units ( 50 + 50 + 100 + 50 + 50 + remaining)
                        if(uni>0){
                            bill = bill + (uni * 7.70);
                        }
                    //( 50 + 50 + 100 + 50 + remaining)
                    }else{
                        bill = bill + (uni*6.00);
                    }
                // (50 + 50 + 100 + remaining)
                }else{
                    bill = bill+ (uni*5.50);
                }
            // (50 + 50 + remainig)
            }else{
                 bill = bill + (uni*4.20);
            }
        // (50 + remaining)
        }else{
            bill = bill + (uni*3.50);
        }
    // if less than 50 units
    }else{
        bill = bill + (uni*2.30);
    }
    // printing output
    printf("Your current bill is Rs. %.2f\n", bill);
}
