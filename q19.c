#include <stdio.h>

int main(){
   int index=0;
   char arr[]={'a','b','c','d','a','b'};

   do{
      printf("%c ",arr[index]);
      index++;
   }while(arr[index]!='a');

   return 0;
}
