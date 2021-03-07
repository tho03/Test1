#include <stdio.h>

#define SIZE 5

int main(){
   int values[SIZE]={10,20,30,40,50};
   int index;
   int result=0;

   for(index=0;index<SIZE;index++){
      result = result + values[index];
   }
   printf("Result: %d\n",result);
   return 0;
}
