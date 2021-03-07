#include <stdio.h>


int main(){
   int val=52;

   if(val>0){
      val=val-3;
   }
   while(val>49){
      printf("Value: %d\n",val);
      val--;
   }
   printf("The End\n");

   return 0;
}
