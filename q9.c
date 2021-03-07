#include <stdio.h>

int main(){
   double dval = 35.789;
   int ival;

   ival = (int) dval;
   printf("dval: %5.2lf\n",dval);
   printf("ival: %5d\n",ival);

   return 0;
}
