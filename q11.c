#include <stdio.h>

int main(){
   int arr[]={45,76,89,23,12};
   int index;
   int num;
   
   for(index=0;index<5;index++){
      if(index==0){
         num=45;
      }
      if(arr[index]<num){
         num=arr[index];
      }
   }
   printf("%d\n",num);

   return 0;
}
