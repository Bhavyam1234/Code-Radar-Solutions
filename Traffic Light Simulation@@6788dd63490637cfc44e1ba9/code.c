#include <stdio.h>

int main()
{
   char a;
   scanf("%c",&a);l
   if(a=='R'){
    printf("Stop");
   }
   else if(a=='G'){
    printf("Go");

   }
   else if(a=='Y'){
    printf("Slow Down");
   }
   else{
    printf("Invalid Input");
   }
   return 0;
}