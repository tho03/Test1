#include <stdio.h>

#define SIZE 10

int main(){
   int values[SIZE]={24,45,67,89,112,56,98,101,42,8};
   int index;

   for(index=SIZE-1;index>=0;index--){
      if(index!=SIZE-1){
         printf("-");
      }
      printf("%d",values[index]);
   }
   printf("\n");
   return 0;
}
