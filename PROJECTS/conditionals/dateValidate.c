#include <stdio.h>
#include <stdbool.h>
int main() {
  bool val;
  int d, m, y;
  printf("enter the date in DD MM YYYY format respectively: ");
  scanf("%d %d %d", &d, &m, &y);
  if(m<=12 && m>= 1){
      val = true;
  }else{
      val = false;
  }
  if(m == 1|| m==3 || m==5 || m==7 || m==8|| m==10 || m== 12){
      if(d<=31 && d>=1){
          val = true;
      }else{
          val = false;
      }
  }else if(m == 4 || m == 6 || m == 9 || m == 11){
      if(d<=30 && d>=1){
          val = true;
      }else{
          val = false;
      }
  }else{
      if((y%400 == 0) || (y%4==0 && y%100 !=0)){
          if(d<=29 && d>=1){
              val = true;
          }else{
              val = false;
          }
      }else if(y%100 == 0 && y%400 != 0){
          if(d<=28 && d>=1){
              val = true;
          }else{
              val = false;
          }
      }
  }
  if(val){
      printf("%d-%d-%d is a valid date", d, m, y);
  }else{
      printf("%d-%d-%d is a invalid date", d, m, y);
  }
    return 0;
}
