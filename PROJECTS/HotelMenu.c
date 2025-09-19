#include <stdio.h>
int main(){
  //talking two choices ch1 and ch2
  //ch1 for the menu food type(whether veg or non veg)
  //ch2 for deciding the menu items in the list
    int ch1, ch2;
    printf("Menu Select Your Preference\n 1. VEG\n 2. NON VEG\n Select Your choice: ");
     scanf("%d", &ch1);
     if(ch1 == 1){
         printf("Select Your Food:\n 1. Veg fried rice\n 2. Veg biryani\n Enter your choice: ");
         scanf("%d" ,&ch2);
         if(ch2 == 1){
             printf("Price of Veg fried rice is 250/- Rupees only");
         }
         if(ch2 == 2){
             printf("Price of Veg Biryani is rice is 200/- Rupees only");
         }
     }
     else if(ch1 == 2){
         printf("Select Your Food:\n 1. Chicken fried rice\n 2. Chicken biryani\n Enter your choice: ");
         scanf("%d" ,&ch2);
         if(ch2 == 1){
             printf("Price of chicken fried rice is 350/- Rupees only");
         }
         if(ch2 == 2){
             printf("Price of chicken Biryani is rice is 300/- Rupees only");
         }
     }
}
