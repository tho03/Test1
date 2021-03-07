#include <stdio.h>

int add(int var1, double var2);

int main(){
   int sum;

   sum=add(5,9);

   return 0;
}

int add(int var1, int var2){
   int sum = var1 + var2;
   return sum;
}
