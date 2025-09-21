#include <stdio.h>

int main() {
//initialization
 char name[25];
 int units;
 float charge, scharge, amount, cpu, bill;
 //taking inputs from the user
 printf("Enter Your Name: ");
 fgets(name, sizeof(name), stdin);
 printf("Enter number of Units Consumed: ");
 scanf("%d", &units);
 //tax calculation
 if(units>300){
     cpu = 1.0;
     charge = units*cpu;
 }else if(units<=200){
     cpu = 0.80;
     charge = units*cpu;
 }else{
     cpu = 0.90;
     charge = units*cpu;
 }
    //additional charges
    if(charge<=100){
        scharge = 0;
        charge = 100;
    }else if(charge>400){
        scharge = (charge*0.15);
    }else{
        scharge = 0;
    }
    bill = charge + scharge;
    //printing the bill
    printf("----------------------------------------\n");
    printf("         ELECTRICITY BILL               \n");
    printf("----------------------------------------\n");
    printf("User Name       : %s", name);
    printf("Units Consumed  : %d\n", units);
    printf("Charge per Unit : Rs. %.2f\n", cpu);
    if(charge<=100){
        printf("Minimum Charges : Rs. %d\n", 100);
    }
    printf("Amount Charged  : Rs. %.2f\n", charge);
    printf("Surcharge       : Rs. %.2f\n", scharge);
    printf("----------------------------------------\n");
    printf("Total Amount    : Rs. %.2f\n", bill);
    printf("----------------------------------------\n");
    
    
    return 0;
}

