#include <stdio.h>

void swap(int val1, int val2);

int main(){
   int val1=100;
   int val2=200;

   printf("val1: %d  val2: %d\n",val1,val2);
   swap(100,200);
   printf("val1: %d  val2: %d\n",val1,val2);


   return 0;
}

void swap(int val1, int val2){
   int temp;

   temp=val1;
   val1=val2;
   val2=temp;
}
