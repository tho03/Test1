#include <stdio.h>

#define SIZE 5

void swap(int arr1[], int arr2[]);
void showArray(int array[], int size);

int main(){
   int arr1[]={2,4,6,8,10};
   int arr2[]={1,3,5,7,9};

   showArray(arr1,SIZE);
   showArray(arr2,SIZE);
   swap(arr1,arr2);
   printf("\n");
   showArray(arr1,SIZE);
   showArray(arr2,SIZE);


   return 0;
}

void swap(int arr1[], int arr2[]){
   int temp;

   temp=arr1[3];
   arr1[3]=arr2[3];
   arr2[3]=temp;
}

void showArray(int array[], int size){
   int index;

   printf("[");
   for(index=0;index<size;index++){
     if(index!=0){
        printf(",");
     }
     printf("%d",array[index]);
   }
   printf("]\n");
}
