#include <stdio.h>

int countVowels(char array[], int size);

int main(){
   char letters[]={'u','e','l','r','o'};
   int vowelCnt;

   //***INSERT FUNCTION CALL HERE****
   printf("Vowel Count: %d\n",vowelCnt);
   return 0;
}

int countVowels(char array[], int size){
   int noVowels=0;
   int index;

   for(index=0;index<size;index++){
      if(array[index]=='a'||array[index]=='e'||array[index]=='i'||
         array[index]=='o'||array[index]=='u'){
         noVowels++;
      }
   }
}
