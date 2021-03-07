#include <stdio.h>


int main(){
   int val1=52;
   int val2=30;
   int val3=100;

   if((val1>30&&val2<30)||val3>=100){
      printf("Result One\n");
   }else{
      printf("Result Two\n");
   }
   printf("The End\n");

   return 0;
}
