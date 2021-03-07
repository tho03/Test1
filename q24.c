#include <stdio.h>

#define SIZE 10

int main(){
   int values[SIZE]={24,45,67,89,112,56,98,101,42,8};
   int index;

   for(index=0;index<SIZE;index++){
      if(values[index]%2==0){
         printf("%d\n",values[index]);
      }
   }
   return 0;
}
