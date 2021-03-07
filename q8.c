#include <stdio.h>

int main(){
   int val1=25;
   int val2=-45;

   if(val1<val2){
      if(val1>0){
         printf("Result One\n");
      }
   }else{
      if(val1<0){
         printf("Result Two\n");
      }else{
         printf("Result Three\n");
      }
   }
   printf("Result Four\n");
   
   return 0;
}
